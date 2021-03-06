
"""
This scipt automatically generates Python bindings using a rule based approach
"""
import sys
sys.setrecursionlimit(3000) # Avoid: RuntimeError: maximum recursion depth exceeded in cmp
import os
try:
   import cPickle as pickle
except:
   import pickle
import ntpath
from pyplusplus import module_builder
from pyplusplus.module_builder import call_policies, file_cache_t
from pyplusplus import messages
from pygccxml import parser, declarations
import wrapper_utilities.mesh_additions

def add_autowrap_classes_to_builder(builder, component_name, classes):
    
    # Convience dict for call policies
    call_policies_collection = {"reference_existing_object": call_policies.return_value_policy(call_policies.reference_existing_object),
                                "return_opaque_pointer": call_policies.return_value_policy(call_policies.return_opaque_pointer) ,
                                "return_internal_reference" : call_policies.return_internal_reference(),
                                "copy_const_reference" : call_policies.return_value_policy(call_policies.copy_const_reference)}
    
    # Classes which have methods taking or returning PETSc vec or mat need to add
    # this custom wrapper code to allow wrapping of PETSc opaque pointers. Any 
    # methods returning them also needs to set up opaque pointer management by
    # choosing the Py++ 'return_opaque_pointer' option.
    petsc_mat_custom_code = "BOOST_PYTHON_OPAQUE_SPECIALIZED_TYPE_ID( _p_Mat )"
    petsc_vec_custom_code = "BOOST_PYTHON_OPAQUE_SPECIALIZED_TYPE_ID( _p_Vec )"
    
    # Remove any classes not in this module. Also use the class to collect cell and population writers.
    cell_writers = []
    population_writers = []
    classes_not_in_module = []
    for eachClass in classes:
        
        # Collect writers
        if eachClass.full_path is not None:
            if "/cell_based/src/writers/cell_writers/" in eachClass.full_path:
                if "Abstract" not in eachClass.name:
                    cell_writers.append(eachClass.name)
            if "/cell_based/src/writers/population_writers/" in eachClass.full_path:
                if "Abstract" not in eachClass.name:
                    population_writers.append(eachClass.name)
        
        if not eachClass.needs_auto_wrapper_generation():
            continue
        if eachClass.component != component_name:
            full_class_names = eachClass.get_full_names()
            for eachTemplatedClassName in full_class_names:
                classes_not_in_module.append(eachTemplatedClassName.replace(' ', ''))
                
    builder.classes(lambda decl: decl.name.replace(' ', '') in classes_not_in_module).exclude()
    
    # Exclude all iterators
    builder.classes( lambda x: x.name in ("Iterator",)).exclude()
    
    # Set up the class in the Py++ builder
    for eachClass in classes:
        if not eachClass.needs_auto_wrapper_generation():
            continue
        
        if eachClass.component == component_name:
            short_class_names = eachClass.get_short_names()
            full_class_names = eachClass.get_full_names()
            for idx, eachTemplatedClassName in enumerate(full_class_names):
                
                # Add the class to the builder
                print "Processing: ", eachTemplatedClassName, " aka ", short_class_names[idx]
                this_class = builder.class_(eachTemplatedClassName)
                this_class.include() 
                
                # Rename the class with its short name, avoids having complicated
                # class names, which Py++ would have to deal with, in the C++ wrapper code.
                if(short_class_names[idx] != eachTemplatedClassName):
                    this_class.rename(short_class_names[idx]) 
                    
                # Set up member function excludes and pointer management
                has_members = False
                try:
                    this_class.member_functions()
                    has_members = True
                except RuntimeError:
                    pass
                
                has_constructors = False
                try:
                    this_class.constructors()
                    has_constructors = True
                except RuntimeError:
                    pass
                
                add_petsc_vec_code = False
                add_petsc_mat_code = False
                petsc_vec_code_will_auto = False
                petsc_mat_code_will_auto = False
                
                if has_constructors:
                    for eachConstructor in this_class.constructors():
                        for eachArgType in eachConstructor.arguments:
                            declaration_string = eachArgType.decl_type.decl_string
                            default_value = eachArgType.default_value
                            
                            if "Vec" in declaration_string and not "CellVecData" in declaration_string:
                                add_petsc_vec_code = True
                            if "Mat" in declaration_string:
                                add_petsc_mat_code = True
                            
                            # Workaround for Bug with default arguments and templates.
                            # Assume the template value in the argument is the same as
                            # in the default.
                            if default_value is not None:
                                if "DIM" in default_value:
                                    print "INFO: Found method default arguement with incomplete type. Guessing the type."
                                    if "3" in declaration_string:
                                        eachArgType.default_value = default_value.replace("DIM", str(3))
                                    if "2" in declaration_string:
                                        eachArgType.default_value = default_value.replace("DIM", str(2))                                
                
                if has_members:
                    for eachMemberFunction in this_class.member_functions():
                        
                        # Exclude any specified member functions
                        if eachClass.excluded_methods is not None and eachMemberFunction.name in eachClass.excluded_methods:
                            eachMemberFunction.exclude()
                            continue
                        
                        # PETSc Vec and Mat args need special care
                        for eachArgType in eachMemberFunction.arguments:
                            declaration_string = eachArgType.decl_type.decl_string
                            default_value = eachArgType.default_value
                            
                            if default_value is not None and "nullptr" in default_value:
                                eachArgType.default_value = default_value.replace("nullptr", "NULL") 
                                
                            #pprint (vars(eachArgType))
                            if "Vec" in declaration_string and not "CellVecData" in declaration_string:
                                add_petsc_vec_code = True
                            if "Mat" in declaration_string:
                                add_petsc_mat_code = True
                                
                            # Bug with default arguments and templates
                            if eachArgType.default_value is not None:
                                if "DIM" in eachArgType.default_value:
                                    print "INFO: Found method default arguement with incomplete type. Guessing the type."
                                    if "3" in declaration_string:
                                        eachArgType.default_value = default_value.replace("DIM", str(3))
                                    if "2" in declaration_string:
                                        eachArgType.default_value = default_value.replace("DIM", str(2)) 
                                
                        # If there are explicit call policies add them
                        break_out = False
                        if eachClass.pointer_return_methods is not None:
                            for eachDefinedPointerPolicy in eachClass.pointer_return_methods:
                                if eachMemberFunction.name == eachDefinedPointerPolicy[0]:
                                    if eachDefinedPointerPolicy[1] in call_policies_collection.keys():
                                        eachMemberFunction.call_policies = call_policies_collection[eachDefinedPointerPolicy[1]]
                                    break_out = True
                                    break
                        if break_out:
                            continue
                        
                        # PETSc Vec and Mat need special care
                        if "Vec" in str(eachMemberFunction.return_type) and not "CellVecData" in str(eachMemberFunction.return_type):
                            eachMemberFunction.call_policies = call_policies_collection["return_opaque_pointer"]
                            petsc_vec_code_will_auto = True
                            continue
                        
                        if "Mat" in str(eachMemberFunction.return_type):
                            eachMemberFunction.call_policies = call_policies_collection["return_opaque_pointer"]
                            petsc_mat_code_will_auto = True
                            continue
                        
                        if declarations.is_pointer(eachMemberFunction.return_type):
                            eachMemberFunction.call_policies = call_policies_collection["reference_existing_object"]
                            continue
                        
                        if declarations.is_reference(eachMemberFunction.return_type):
                            eachMemberFunction.call_policies = call_policies_collection["return_internal_reference"]
                            continue                        
                        
                # Explicitly remove abstract class constructors
#                 if "Abstract" in eachClass.name:
#                     this_class.constructors().exclude()
                        
                # Set up variable excludes
                if eachClass.excluded_variables is not None:
                    for eachVariable in eachClass.excluded_variables:
                        this_class.variables(eachVariable).exclude()                
                        
                # Add declaration code
                if add_petsc_vec_code and not petsc_vec_code_will_auto:
                    print "Petsc Vec found: Adding custom declaration code."
                    this_class.add_declaration_code(petsc_vec_custom_code)
                     
                if add_petsc_mat_code and not petsc_mat_code_will_auto:
                    print "Petsc Mat found: Adding custom declaration code."
                    this_class.add_declaration_code(petsc_mat_custom_code)
                
                if eachClass.declaration_code is not None:
                    for eachLine in eachClass.declaration_code:
                        this_class.add_declaration_code(eachLine)
                        
                # If this is a suitable class (i.e. concentrete cell population)
                # add writer template functions.
                if eachClass.full_path is not None:
                    if "/cell_based/src/population/" in eachClass.full_path:
                        if "Abstract" not in eachClass.name and "CellwiseDataGradient" not in eachClass.name:
                            if "BasedCellPopulation" in eachClass.name:
                                for eachWriter in cell_writers:
                                        writer_prefix = 'def("AddCellWriter' + eachWriter + '", &'
                                        writer_suffix = '::AddCellWriter<' + eachWriter + '>)'
                                        this_class.add_registration_code(writer_prefix + eachTemplatedClassName + writer_suffix)  
                                for eachWriter in population_writers:
                                        writer_prefix = 'def("AddPopulationWriter' + eachWriter + '", &'
                                        writer_suffix = '::AddPopulationWriter<' + eachWriter + '>)'
                                        this_class.add_registration_code(writer_prefix + eachTemplatedClassName + writer_suffix)   
    
    # Bug with null type in default template arguements
    for eachTemplate in ["<2>", "<3>"]: 
        builder.class_("AbstractPdeModifier"+eachTemplate).constructors().exclude()  
        builder.class_('AbstractPdeModifier'+eachTemplate).calldefs().use_default_arguments=False 
        
    # Don't return non-const reference for ChastePoint
    returns_non_const_ref = builder.class_('ChastePoint<3>').member_functions(return_type = "::boost::numeric::ublas::c_vector<double, 3> &")
    returns_non_const_ref.exclude()
    returns_non_const_ref = builder.class_('ChastePoint<2>').member_functions(return_type = "::boost::numeric::ublas::c_vector<double, 2> &")
    returns_non_const_ref.exclude()
    
    return builder, classes
            
def strip_undefined_call_policies(module_file):
    
    # Catch-all to remove methods with undefined call policies that
    # might otherwise have been missed.
    
    lines = []
    with open(module_file) as infile:
        for line in infile:
            lines.append(line)
            
    strip_indices = []
    def_index = 0
    for idx, eachLine in enumerate(lines):
        if ".def(" in eachLine:
            def_index = idx
        if "/* undefined call policies */" in eachLine:
            if ";" in eachLine:
                strip_indices.extend(range(idx-1, def_index-1, -1))
                lines[idx] = ";"
            else:
                strip_indices.extend(range(idx, def_index-1, -1))                
            
    if len(strip_indices)>0:
        print "Note: found undefined call policies in ", module_file, ". Stripping them out."
        
    return_lines = [i for j, i in enumerate(lines) if j not in strip_indices]
    
    with open(module_file, 'w') as outfile:
        for line in return_lines:
            outfile.write(line) 
            
def strip_value_traits(module_file, file_list):
    
    lines = []
    with open(module_file) as infile:
        for line in infile:
            lines.append(line)
            
    return_lines = []
    for idx, eachLine in enumerate(lines):
        if "__value_traits.pypp.hpp" in eachLine:
            # Get the base file name
            cleaned_line = eachLine.rstrip().replace(" ", "").replace("#include", "").translate(None, '"')
            if cleaned_line not in file_list:
                continue
        return_lines.append(eachLine)
            
    if len(return_lines) != len(lines):
        print "Stripped value traits from: ", module_file
    
    with open(module_file, 'w') as outfile:
        for line in return_lines:
            outfile.write(line)     
    
def do_module(module_name, builder, work_dir, classes):
    
    # Set up the builder with module specifc classes
    builder, classes = add_autowrap_classes_to_builder(builder, module_name, classes)
    
    # If there is a module with some extra wrapper code execute it
    if module_name == "mesh":
        builder, classes = wrapper_utilities.mesh_additions.update_builder(builder, classes)     
        
    # Write the class names to file for building Python docs later on
    f = open(work_dir + '/class_names_for_doc.txt','w')
    for eachClass in classes:
        if eachClass.component is not None and module_name in eachClass.component:
            for eachName in eachClass.get_short_names():
                f.write('.. autoclass:: chaste.' + module_name + '.' + eachName + '\n\t:members:\n\n')
    f.close()
    return builder
       
def generate_wrappers(args):
    
    work_dir = args[1]
    header_collection = args[2]
    castxml_binary = args[3]
    module_name = args[4]
    includes = args[5:]

    xml_generator_config = parser.xml_generator_configuration_t(xml_generator_path=castxml_binary, 
                                                                xml_generator="castxml",
                                                                #compiler = "gnu",
                                                                #compiler_path="/usr/bin/c++",
                                                                cflags = "-std=c++11",
                                                                include_paths=includes)
     
    builder = module_builder.module_builder_t([header_collection],
                                                xml_generator_path = castxml_binary,
                                                xml_generator_config = xml_generator_config,
                                                start_with_declarations = ['chaste'],
                                                include_paths = includes,
                                                #cflags = "-std=c++11",
                                                indexing_suite_version=2,
                                                cache=file_cache_t(work_dir + "/dynamic/wrappers/castxml_cache.xml"))
    
    messages.disable(messages.W1040) # unexposed declaration
    messages.disable(messages.W1031) # user to expose non public member function
    messages.disable(messages.W1023) # user to define some functions
    messages.disable(messages.W1014) # operator not supported
    messages.disable(messages.W1036) # can't expose immutable member variables
    
    # Don't wrap std or boost library
    builder.global_ns.namespace('std').exclude()
    builder.global_ns.namespace('boost').exclude()
    
    # Strip out Instantiation 'tricks' in the header file
    # todo - the first line is presumably no longer necessary
    builder.free_function("GetPetscMatForWrapper").call_policies = call_policies.return_value_policy(
        call_policies.return_opaque_pointer)
    builder.free_function("GetPetscMatForWrapper").exclude()
    builder.free_function("Instantiation").exclude()
    
    # Load the classes to be wrapped
    with open(work_dir + "/dynamic/wrappers/class_data.p", 'rb') as fp:
        classes = pickle.load(fp)
    
    possible_module_names = [module_name]
    possible_module_names = ["core", "ode", "pde", "mesh", "cell_based", "tutorial", "visualization"]
    if module_name == "All":
        possible_module_names = ["core", "ode", "pde", "mesh", "cell_based", "tutorial", "visualization"]        
    
    for idx, eachModule in enumerate(possible_module_names):
        
        print 'Generating Wrapper Code for: ' + eachModule + ' Module.'
        
        if "core" not in eachModule and len(possible_module_names)>1:
            builder.register_module_dependency(work_dir + "/dynamic/wrappers/"+possible_module_names[idx-1])
        
        # Set up the builder for each module
        
        print 'Starting Module: ' + eachModule + ' Module.'
        builder = do_module(eachModule, builder, work_dir + "/dynamic/wrappers/" + eachModule + "/", classes)

        # Make the wrapper code
    #     builder.build_code_creator(module_name="_chaste_project_PyChaste_" + module_name, 
    #                                doc_extractor=doxygen_extractor.doxygen_doc_extractor())
        builder.build_code_creator(module_name="_chaste_project_PyChaste_" + eachModule)
        builder.code_creator.user_defined_directories.append(work_dir)
        builder.code_creator.user_defined_directories.append(work_dir + "/dynamic/wrappers/")
        builder.code_creator.user_defined_directories.append(work_dir + "/dynamic/wrappers/" + eachModule + "/")
        builder.code_creator.license = chaste_license
        
        file_list = builder.split_module(work_dir+"/dynamic/wrappers/"+eachModule)
        value_traits_files = []
        for eachFile in file_list:
            if "__value_traits" in eachFile:
                value_traits_files.append(ntpath.basename(eachFile))
        
        # Manually strip any undefined call policies we have missed. Strictly there should not be any/many.
        for file in os.listdir(work_dir + "/dynamic/wrappers/" + eachModule + "/"):
            if file.endswith(".cpp"):
                strip_undefined_call_policies(work_dir + "/dynamic/wrappers/" + eachModule + "/" + file)
                
        # Manually remove some value traits in std headers (https://mail.python.org/pipermail/cplusplus-sig/2008-April/013105.html)
        for file in os.listdir(work_dir + "/dynamic/wrappers/" + eachModule + "/"):
            if file.endswith(".cpp"):
                strip_value_traits(work_dir + "/dynamic/wrappers/" + eachModule + "/" + file, value_traits_files)
    
if __name__=="__main__":
    generate_wrappers(sys.argv)
