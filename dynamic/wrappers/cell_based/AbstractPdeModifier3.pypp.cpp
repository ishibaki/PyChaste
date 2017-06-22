// This file has been generated by Py++.


/*

Copyright (c) 2005-2017, University of Oxford.
All rights reserved.

University of Oxford means the Chancellor, Masters and Scholars of the
University of Oxford, having an administrative office at Wellington
Square, Oxford OX1 2JD, UK.

This file is part of Chaste.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.
 * Neither the name of the University of Oxford nor the names of its
   contributors may be used to endorse or promote products derived from this
   software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#include "boost/python.hpp"
#include "wrapper_header_collection.hpp"
#include "AbstractPdeModifier3.pypp.hpp"

namespace bp = boost::python;

struct AbstractPdeModifier_less__3__greater__wrapper : AbstractPdeModifier< 3 >, bp::wrapper< AbstractPdeModifier< 3 > > {

    virtual void OutputSimulationModifierParameters( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputSimulationModifierParameters = this->get_override( "OutputSimulationModifierParameters" ) )
            func_OutputSimulationModifierParameters( rParamsFile );
        else{
            this->AbstractPdeModifier< 3 >::OutputSimulationModifierParameters( rParamsFile );
        }
    }
    
    void default_OutputSimulationModifierParameters( ::out_stream & rParamsFile ) {
        AbstractPdeModifier< 3 >::OutputSimulationModifierParameters( rParamsFile );
    }

    virtual void SetupSolve( ::AbstractCellPopulation< 3, 3 > & rCellPopulation, ::std::string outputDirectory ) {
        if( bp::override func_SetupSolve = this->get_override( "SetupSolve" ) )
            func_SetupSolve( boost::ref(rCellPopulation), outputDirectory );
        else{
            this->AbstractPdeModifier< 3 >::SetupSolve( boost::ref(rCellPopulation), outputDirectory );
        }
    }
    
    void default_SetupSolve( ::AbstractCellPopulation< 3, 3 > & rCellPopulation, ::std::string outputDirectory ) {
        AbstractPdeModifier< 3 >::SetupSolve( boost::ref(rCellPopulation), outputDirectory );
    }

    virtual void UpdateAtEndOfOutputTimeStep( ::AbstractCellPopulation< 3, 3 > & rCellPopulation ) {
        if( bp::override func_UpdateAtEndOfOutputTimeStep = this->get_override( "UpdateAtEndOfOutputTimeStep" ) )
            func_UpdateAtEndOfOutputTimeStep( boost::ref(rCellPopulation) );
        else{
            this->AbstractPdeModifier< 3 >::UpdateAtEndOfOutputTimeStep( boost::ref(rCellPopulation) );
        }
    }
    
    void default_UpdateAtEndOfOutputTimeStep( ::AbstractCellPopulation< 3, 3 > & rCellPopulation ) {
        AbstractPdeModifier< 3 >::UpdateAtEndOfOutputTimeStep( boost::ref(rCellPopulation) );
    }

    virtual void UpdateAtEndOfSolve( ::AbstractCellPopulation< 3, 3 > & rCellPopulation ) {
        if( bp::override func_UpdateAtEndOfSolve = this->get_override( "UpdateAtEndOfSolve" ) )
            func_UpdateAtEndOfSolve( boost::ref(rCellPopulation) );
        else{
            this->AbstractPdeModifier< 3 >::UpdateAtEndOfSolve( boost::ref(rCellPopulation) );
        }
    }
    
    void default_UpdateAtEndOfSolve( ::AbstractCellPopulation< 3, 3 > & rCellPopulation ) {
        AbstractPdeModifier< 3 >::UpdateAtEndOfSolve( boost::ref(rCellPopulation) );
    }

    virtual void UpdateAtEndOfTimeStep( ::AbstractCellPopulation< 3, 3 > & rCellPopulation ){
        bp::override func_UpdateAtEndOfTimeStep = this->get_override( "UpdateAtEndOfTimeStep" );
        func_UpdateAtEndOfTimeStep( boost::ref(rCellPopulation) );
    }

};

BOOST_PYTHON_OPAQUE_SPECIALIZED_TYPE_ID( _p_Vec )

void register_AbstractPdeModifier3_class(){

    bp::class_< AbstractPdeModifier_less__3__greater__wrapper, bp::bases< AbstractCellBasedSimulationModifier< 3, 3 > >, boost::noncopyable >( "AbstractPdeModifier3", bp::no_init )    
        .def( 
            "GetBoundaryCondition"
            , (::boost::shared_ptr< AbstractBoundaryCondition< 3 > > ( ::AbstractPdeModifier<3>::* )(  ))( &::AbstractPdeModifier< 3 >::GetBoundaryCondition ) )    
        .def( 
            "GetFeMesh"
            , (::TetrahedralMesh< 3, 3 > * ( ::AbstractPdeModifier<3>::* )(  )const)( &::AbstractPdeModifier< 3 >::GetFeMesh )
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "GetOutputGradient"
            , (bool ( ::AbstractPdeModifier<3>::* )(  ))( &::AbstractPdeModifier< 3 >::GetOutputGradient ) )    
        .def( 
            "GetPde"
            , (::boost::shared_ptr< AbstractLinearPde< 3, 3 > > ( ::AbstractPdeModifier<3>::* )(  ))( &::AbstractPdeModifier< 3 >::GetPde ) )    
        .def( 
            "GetSolution"
            , (::Vec ( ::AbstractPdeModifier<3>::* )(  ))( &::AbstractPdeModifier< 3 >::GetSolution )
            , bp::return_value_policy< bp::return_opaque_pointer >() )    
        .def( 
            "GetSolution"
            , (::Vec ( ::AbstractPdeModifier<3>::* )(  )const)( &::AbstractPdeModifier< 3 >::GetSolution )
            , bp::return_value_policy< bp::return_opaque_pointer >() )    
        .def( 
            "HasAveragedSourcePde"
            , (bool ( ::AbstractPdeModifier<3>::* )(  ))( &::AbstractPdeModifier< 3 >::HasAveragedSourcePde ) )    
        .def( 
            "IsNeumannBoundaryCondition"
            , (bool ( ::AbstractPdeModifier<3>::* )(  ))( &::AbstractPdeModifier< 3 >::IsNeumannBoundaryCondition ) )    
        .def( 
            "OutputSimulationModifierParameters"
            , (void ( ::AbstractPdeModifier<3>::* )( ::out_stream & ))(&::AbstractPdeModifier< 3 >::OutputSimulationModifierParameters)
            , (void ( AbstractPdeModifier_less__3__greater__wrapper::* )( ::out_stream & ))(&AbstractPdeModifier_less__3__greater__wrapper::default_OutputSimulationModifierParameters)
            , ( bp::arg("rParamsFile") ) )    
        .def( 
            "SetDependentVariableName"
            , (void ( ::AbstractPdeModifier<3>::* )( ::std::string const & ))( &::AbstractPdeModifier< 3 >::SetDependentVariableName )
            , ( bp::arg("rName") ) )    
        .def( 
            "SetOutputGradient"
            , (void ( ::AbstractPdeModifier<3>::* )( bool ))( &::AbstractPdeModifier< 3 >::SetOutputGradient )
            , ( bp::arg("outputGradient") ) )    
        .def( 
            "SetOutputSolutionAtPdeNodes"
            , (void ( ::AbstractPdeModifier<3>::* )( bool ))( &::AbstractPdeModifier< 3 >::SetOutputSolutionAtPdeNodes )
            , ( bp::arg("outputSolutionAtPdeNodes") ) )    
        .def( 
            "SetUpSourceTermsForAveragedSourcePde"
            , (void ( ::AbstractPdeModifier<3>::* )( ::TetrahedralMesh< 3, 3 > *,::std::map< boost::shared_ptr<Cell>, unsigned int > * ))( &::AbstractPdeModifier< 3 >::SetUpSourceTermsForAveragedSourcePde )
            , ( bp::arg("pMesh"), bp::arg("pCellPdeElementMap") ) )    
        .def( 
            "SetupSolve"
            , (void ( ::AbstractPdeModifier<3>::* )( ::AbstractCellPopulation< 3, 3 > &,::std::string ))(&::AbstractPdeModifier< 3 >::SetupSolve)
            , (void ( AbstractPdeModifier_less__3__greater__wrapper::* )( ::AbstractCellPopulation< 3, 3 > &,::std::string ))(&AbstractPdeModifier_less__3__greater__wrapper::default_SetupSolve)
            , ( bp::arg("rCellPopulation"), bp::arg("outputDirectory") ) )    
        .def( 
            "UpdateAtEndOfOutputTimeStep"
            , (void ( ::AbstractPdeModifier<3>::* )( ::AbstractCellPopulation< 3, 3 > & ))(&::AbstractPdeModifier< 3 >::UpdateAtEndOfOutputTimeStep)
            , (void ( AbstractPdeModifier_less__3__greater__wrapper::* )( ::AbstractCellPopulation< 3, 3 > & ))(&AbstractPdeModifier_less__3__greater__wrapper::default_UpdateAtEndOfOutputTimeStep)
            , ( bp::arg("rCellPopulation") ) )    
        .def( 
            "UpdateAtEndOfSolve"
            , (void ( ::AbstractPdeModifier<3>::* )( ::AbstractCellPopulation< 3, 3 > & ))(&::AbstractPdeModifier< 3 >::UpdateAtEndOfSolve)
            , (void ( AbstractPdeModifier_less__3__greater__wrapper::* )( ::AbstractCellPopulation< 3, 3 > & ))(&AbstractPdeModifier_less__3__greater__wrapper::default_UpdateAtEndOfSolve)
            , ( bp::arg("rCellPopulation") ) )    
        .def( 
            "UpdateAtEndOfTimeStep"
            , bp::pure_virtual( (void ( ::AbstractPdeModifier<3>::* )( ::AbstractCellPopulation< 3, 3 > & ))(&::AbstractPdeModifier< 3 >::UpdateAtEndOfTimeStep) )
            , ( bp::arg("rCellPopulation") ) )    
        .def( 
            "rGetDependentVariableName"
            , (::std::string & ( ::AbstractPdeModifier<3>::* )(  ))( &::AbstractPdeModifier< 3 >::rGetDependentVariableName )
            , bp::return_internal_reference< >() );

}
