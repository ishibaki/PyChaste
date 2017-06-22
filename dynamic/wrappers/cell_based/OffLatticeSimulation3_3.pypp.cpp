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
#include "OffLatticeSimulation3_3.pypp.hpp"

namespace bp = boost::python;

struct OffLatticeSimulation_less__3_comma__3__greater__wrapper : OffLatticeSimulation< 3, 3 >, bp::wrapper< OffLatticeSimulation< 3, 3 > > {

    OffLatticeSimulation_less__3_comma__3__greater__wrapper(::AbstractCellPopulation< 3, 3 > & rCellPopulation, bool deleteCellPopulationInDestructor=false, bool initialiseCells=true )
    : OffLatticeSimulation<3, 3>( boost::ref(rCellPopulation), deleteCellPopulationInDestructor, initialiseCells )
      , bp::wrapper< OffLatticeSimulation< 3, 3 > >(){
        // constructor
    
    }

    void ApplyBoundaries( ::std::map< Node<3> *, boost::numeric::ublas::c_vector<double, 3> > oldNodeLoctions ){
        OffLatticeSimulation< 3, 3 >::ApplyBoundaries( oldNodeLoctions );
    }

    virtual void OutputAdditionalSimulationSetup( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputAdditionalSimulationSetup = this->get_override( "OutputAdditionalSimulationSetup" ) )
            func_OutputAdditionalSimulationSetup( rParamsFile );
        else{
            this->OffLatticeSimulation< 3, 3 >::OutputAdditionalSimulationSetup( rParamsFile );
        }
    }
    
    void default_OutputAdditionalSimulationSetup( ::out_stream & rParamsFile ) {
        OffLatticeSimulation< 3, 3 >::OutputAdditionalSimulationSetup( rParamsFile );
    }

    virtual void OutputSimulationParameters( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputSimulationParameters = this->get_override( "OutputSimulationParameters" ) )
            func_OutputSimulationParameters( rParamsFile );
        else{
            this->OffLatticeSimulation< 3, 3 >::OutputSimulationParameters( rParamsFile );
        }
    }
    
    void default_OutputSimulationParameters( ::out_stream & rParamsFile ) {
        OffLatticeSimulation< 3, 3 >::OutputSimulationParameters( rParamsFile );
    }

    void RevertToOldLocations( ::std::map< Node<3> *, boost::numeric::ublas::c_vector<double, 3> > oldNodeLoctions ){
        OffLatticeSimulation< 3, 3 >::RevertToOldLocations( oldNodeLoctions );
    }

    virtual void SetupSolve(  ){
        if( bp::override func_SetupSolve = this->get_override( "SetupSolve" ) )
            func_SetupSolve(  );
        else{
            this->OffLatticeSimulation< 3, 3 >::SetupSolve(  );
        }
    }
    
    virtual void default_SetupSolve(  ){
        OffLatticeSimulation< 3, 3 >::SetupSolve( );
    }

    virtual void UpdateCellLocationsAndTopology(  ){
        if( bp::override func_UpdateCellLocationsAndTopology = this->get_override( "UpdateCellLocationsAndTopology" ) )
            func_UpdateCellLocationsAndTopology(  );
        else{
            this->OffLatticeSimulation< 3, 3 >::UpdateCellLocationsAndTopology(  );
        }
    }
    
    virtual void default_UpdateCellLocationsAndTopology(  ){
        OffLatticeSimulation< 3, 3 >::UpdateCellLocationsAndTopology( );
    }

    virtual void WriteVisualizerSetupFile(  ){
        if( bp::override func_WriteVisualizerSetupFile = this->get_override( "WriteVisualizerSetupFile" ) )
            func_WriteVisualizerSetupFile(  );
        else{
            this->OffLatticeSimulation< 3, 3 >::WriteVisualizerSetupFile(  );
        }
    }
    
    virtual void default_WriteVisualizerSetupFile(  ){
        OffLatticeSimulation< 3, 3 >::WriteVisualizerSetupFile( );
    }

    virtual unsigned int DoCellBirth(  ){
        if( bp::override func_DoCellBirth = this->get_override( "DoCellBirth" ) )
            return func_DoCellBirth(  );
        else{
            return this->AbstractCellBasedSimulation< 3, 3 >::DoCellBirth(  );
        }
    }
    
    virtual unsigned int default_DoCellBirth(  ){
        return AbstractCellBasedSimulation< 3, 3 >::DoCellBirth( );
    }

    unsigned int DoCellRemoval(  ){
        return AbstractCellBasedSimulation< 3, 3 >::DoCellRemoval(  );
    }

    void OutputSimulationSetup(  ){
        AbstractCellBasedSimulation< 3, 3 >::OutputSimulationSetup(  );
    }

    virtual bool StoppingEventHasOccurred(  ){
        if( bp::override func_StoppingEventHasOccurred = this->get_override( "StoppingEventHasOccurred" ) )
            return func_StoppingEventHasOccurred(  );
        else{
            return this->AbstractCellBasedSimulation< 3, 3 >::StoppingEventHasOccurred(  );
        }
    }
    
    virtual bool default_StoppingEventHasOccurred(  ){
        return AbstractCellBasedSimulation< 3, 3 >::StoppingEventHasOccurred( );
    }

    virtual void UpdateCellPopulation(  ){
        if( bp::override func_UpdateCellPopulation = this->get_override( "UpdateCellPopulation" ) )
            func_UpdateCellPopulation(  );
        else{
            this->AbstractCellBasedSimulation< 3, 3 >::UpdateCellPopulation(  );
        }
    }
    
    virtual void default_UpdateCellPopulation(  ){
        AbstractCellBasedSimulation< 3, 3 >::UpdateCellPopulation( );
    }

};

void register_OffLatticeSimulation3_3_class(){

    { //::OffLatticeSimulation< 3, 3 >
        typedef bp::class_< OffLatticeSimulation_less__3_comma__3__greater__wrapper, bp::bases< AbstractCellBasedSimulation< 3, 3 > >, boost::noncopyable > OffLatticeSimulation3_3_exposer_t;
        OffLatticeSimulation3_3_exposer_t OffLatticeSimulation3_3_exposer = OffLatticeSimulation3_3_exposer_t( "OffLatticeSimulation3_3", bp::init< AbstractCellPopulation< 3, 3 > &, bp::optional< bool, bool > >(( bp::arg("rCellPopulation"), bp::arg("deleteCellPopulationInDestructor")=(bool)(false), bp::arg("initialiseCells")=(bool)(true) )) );
        bp::scope OffLatticeSimulation3_3_scope( OffLatticeSimulation3_3_exposer );
        bp::implicitly_convertible< AbstractCellPopulation< 3, 3 > &, OffLatticeSimulation< 3, 3 > >();
        { //::OffLatticeSimulation< 3, 3 >::AddCellPopulationBoundaryCondition
        
            typedef OffLatticeSimulation< 3, 3 > exported_class_t;
            typedef void ( exported_class_t::*AddCellPopulationBoundaryCondition_function_type)( ::boost::shared_ptr< AbstractCellPopulationBoundaryCondition< 3, 3 > > ) ;
            
            OffLatticeSimulation3_3_exposer.def( 
                "AddCellPopulationBoundaryCondition"
                , AddCellPopulationBoundaryCondition_function_type( &::OffLatticeSimulation< 3, 3 >::AddCellPopulationBoundaryCondition )
                , ( bp::arg("pBoundaryCondition") ) );
        
        }
        { //::OffLatticeSimulation< 3, 3 >::AddForce
        
            typedef OffLatticeSimulation< 3, 3 > exported_class_t;
            typedef void ( exported_class_t::*AddForce_function_type)( ::boost::shared_ptr< AbstractForce< 3, 3 > > ) ;
            
            OffLatticeSimulation3_3_exposer.def( 
                "AddForce"
                , AddForce_function_type( &::OffLatticeSimulation< 3, 3 >::AddForce )
                , ( bp::arg("pForce") ) );
        
        }
        { //::OffLatticeSimulation< 3, 3 >::ApplyBoundaries
        
            typedef OffLatticeSimulation< 3, 3 > exported_class_t;
            typedef void ( OffLatticeSimulation_less__3_comma__3__greater__wrapper::*ApplyBoundaries_function_type)( ::std::map< Node<3> *, boost::numeric::ublas::c_vector<double, 3> > ) ;
            
            OffLatticeSimulation3_3_exposer.def( 
                "ApplyBoundaries"
                , ApplyBoundaries_function_type( &OffLatticeSimulation_less__3_comma__3__greater__wrapper::ApplyBoundaries )
                , ( bp::arg("oldNodeLoctions") ) );
        
        }
        { //::OffLatticeSimulation< 3, 3 >::GetNumericalMethod
        
            typedef OffLatticeSimulation< 3, 3 > exported_class_t;
            typedef ::boost::shared_ptr< AbstractNumericalMethod< 3, 3 > > const ( exported_class_t::*GetNumericalMethod_function_type)(  ) const;
            
            OffLatticeSimulation3_3_exposer.def( 
                "GetNumericalMethod"
                , GetNumericalMethod_function_type( &::OffLatticeSimulation< 3, 3 >::GetNumericalMethod ) );
        
        }
        { //::OffLatticeSimulation< 3, 3 >::OutputAdditionalSimulationSetup
        
            typedef OffLatticeSimulation< 3, 3 > exported_class_t;
            typedef void ( exported_class_t::*OutputAdditionalSimulationSetup_function_type)( ::out_stream & ) ;
            typedef void ( OffLatticeSimulation_less__3_comma__3__greater__wrapper::*default_OutputAdditionalSimulationSetup_function_type)( ::out_stream & ) ;
            
            OffLatticeSimulation3_3_exposer.def( 
                "OutputAdditionalSimulationSetup"
                , OutputAdditionalSimulationSetup_function_type(&::OffLatticeSimulation< 3, 3 >::OutputAdditionalSimulationSetup)
                , default_OutputAdditionalSimulationSetup_function_type(&OffLatticeSimulation_less__3_comma__3__greater__wrapper::default_OutputAdditionalSimulationSetup)
                , ( bp::arg("rParamsFile") ) );
        
        }
        { //::OffLatticeSimulation< 3, 3 >::OutputSimulationParameters
        
            typedef OffLatticeSimulation< 3, 3 > exported_class_t;
            typedef void ( exported_class_t::*OutputSimulationParameters_function_type)( ::out_stream & ) ;
            typedef void ( OffLatticeSimulation_less__3_comma__3__greater__wrapper::*default_OutputSimulationParameters_function_type)( ::out_stream & ) ;
            
            OffLatticeSimulation3_3_exposer.def( 
                "OutputSimulationParameters"
                , OutputSimulationParameters_function_type(&::OffLatticeSimulation< 3, 3 >::OutputSimulationParameters)
                , default_OutputSimulationParameters_function_type(&OffLatticeSimulation_less__3_comma__3__greater__wrapper::default_OutputSimulationParameters)
                , ( bp::arg("rParamsFile") ) );
        
        }
        { //::OffLatticeSimulation< 3, 3 >::RemoveAllCellPopulationBoundaryConditions
        
            typedef OffLatticeSimulation< 3, 3 > exported_class_t;
            typedef void ( exported_class_t::*RemoveAllCellPopulationBoundaryConditions_function_type)(  ) ;
            
            OffLatticeSimulation3_3_exposer.def( 
                "RemoveAllCellPopulationBoundaryConditions"
                , RemoveAllCellPopulationBoundaryConditions_function_type( &::OffLatticeSimulation< 3, 3 >::RemoveAllCellPopulationBoundaryConditions ) );
        
        }
        { //::OffLatticeSimulation< 3, 3 >::RemoveAllForces
        
            typedef OffLatticeSimulation< 3, 3 > exported_class_t;
            typedef void ( exported_class_t::*RemoveAllForces_function_type)(  ) ;
            
            OffLatticeSimulation3_3_exposer.def( 
                "RemoveAllForces"
                , RemoveAllForces_function_type( &::OffLatticeSimulation< 3, 3 >::RemoveAllForces ) );
        
        }
        { //::OffLatticeSimulation< 3, 3 >::RevertToOldLocations
        
            typedef OffLatticeSimulation< 3, 3 > exported_class_t;
            typedef void ( OffLatticeSimulation_less__3_comma__3__greater__wrapper::*RevertToOldLocations_function_type)( ::std::map< Node<3> *, boost::numeric::ublas::c_vector<double, 3> > ) ;
            
            OffLatticeSimulation3_3_exposer.def( 
                "RevertToOldLocations"
                , RevertToOldLocations_function_type( &OffLatticeSimulation_less__3_comma__3__greater__wrapper::RevertToOldLocations )
                , ( bp::arg("oldNodeLoctions") ) );
        
        }
        { //::OffLatticeSimulation< 3, 3 >::SetNumericalMethod
        
            typedef OffLatticeSimulation< 3, 3 > exported_class_t;
            typedef void ( exported_class_t::*SetNumericalMethod_function_type)( ::boost::shared_ptr< AbstractNumericalMethod< 3, 3 > > ) ;
            
            OffLatticeSimulation3_3_exposer.def( 
                "SetNumericalMethod"
                , SetNumericalMethod_function_type( &::OffLatticeSimulation< 3, 3 >::SetNumericalMethod )
                , ( bp::arg("pNumericalMethod") ) );
        
        }
        { //::OffLatticeSimulation< 3, 3 >::SetupSolve
        
            typedef OffLatticeSimulation< 3, 3 > exported_class_t;
            typedef void ( OffLatticeSimulation_less__3_comma__3__greater__wrapper::*SetupSolve_function_type)(  ) ;
            
            OffLatticeSimulation3_3_exposer.def( 
                "SetupSolve"
                , SetupSolve_function_type( &OffLatticeSimulation_less__3_comma__3__greater__wrapper::default_SetupSolve ) );
        
        }
        { //::OffLatticeSimulation< 3, 3 >::UpdateCellLocationsAndTopology
        
            typedef OffLatticeSimulation< 3, 3 > exported_class_t;
            typedef void ( OffLatticeSimulation_less__3_comma__3__greater__wrapper::*UpdateCellLocationsAndTopology_function_type)(  ) ;
            
            OffLatticeSimulation3_3_exposer.def( 
                "UpdateCellLocationsAndTopology"
                , UpdateCellLocationsAndTopology_function_type( &OffLatticeSimulation_less__3_comma__3__greater__wrapper::default_UpdateCellLocationsAndTopology ) );
        
        }
        { //::OffLatticeSimulation< 3, 3 >::WriteVisualizerSetupFile
        
            typedef OffLatticeSimulation< 3, 3 > exported_class_t;
            typedef void ( OffLatticeSimulation_less__3_comma__3__greater__wrapper::*WriteVisualizerSetupFile_function_type)(  ) ;
            
            OffLatticeSimulation3_3_exposer.def( 
                "WriteVisualizerSetupFile"
                , WriteVisualizerSetupFile_function_type( &OffLatticeSimulation_less__3_comma__3__greater__wrapper::default_WriteVisualizerSetupFile ) );
        
        }
        { //::OffLatticeSimulation< 3, 3 >::rGetForceCollection
        
            typedef OffLatticeSimulation< 3, 3 > exported_class_t;
            typedef ::std::vector< boost::shared_ptr<AbstractForce<3, 3> > > const & ( exported_class_t::*rGetForceCollection_function_type)(  ) const;
            
            OffLatticeSimulation3_3_exposer.def( 
                "rGetForceCollection"
                , rGetForceCollection_function_type( &::OffLatticeSimulation< 3, 3 >::rGetForceCollection )
                , bp::return_internal_reference< >() );
        
        }
        { //::AbstractCellBasedSimulation< 3, 3 >::DoCellBirth
        
            typedef OffLatticeSimulation< 3, 3 > exported_class_t;
            typedef unsigned int ( OffLatticeSimulation_less__3_comma__3__greater__wrapper::*DoCellBirth_function_type)(  ) ;
            
            OffLatticeSimulation3_3_exposer.def( 
                "DoCellBirth"
                , DoCellBirth_function_type( &OffLatticeSimulation_less__3_comma__3__greater__wrapper::default_DoCellBirth ) );
        
        }
        { //::AbstractCellBasedSimulation< 3, 3 >::DoCellRemoval
        
            typedef OffLatticeSimulation< 3, 3 > exported_class_t;
            typedef unsigned int ( OffLatticeSimulation_less__3_comma__3__greater__wrapper::*DoCellRemoval_function_type)(  ) ;
            
            OffLatticeSimulation3_3_exposer.def( 
                "DoCellRemoval"
                , DoCellRemoval_function_type( &OffLatticeSimulation_less__3_comma__3__greater__wrapper::DoCellRemoval ) );
        
        }
        { //::AbstractCellBasedSimulation< 3, 3 >::OutputSimulationSetup
        
            typedef OffLatticeSimulation< 3, 3 > exported_class_t;
            typedef void ( OffLatticeSimulation_less__3_comma__3__greater__wrapper::*OutputSimulationSetup_function_type)(  ) ;
            
            OffLatticeSimulation3_3_exposer.def( 
                "OutputSimulationSetup"
                , OutputSimulationSetup_function_type( &OffLatticeSimulation_less__3_comma__3__greater__wrapper::OutputSimulationSetup ) );
        
        }
        { //::AbstractCellBasedSimulation< 3, 3 >::StoppingEventHasOccurred
        
            typedef OffLatticeSimulation< 3, 3 > exported_class_t;
            typedef bool ( OffLatticeSimulation_less__3_comma__3__greater__wrapper::*StoppingEventHasOccurred_function_type)(  ) ;
            
            OffLatticeSimulation3_3_exposer.def( 
                "StoppingEventHasOccurred"
                , StoppingEventHasOccurred_function_type( &OffLatticeSimulation_less__3_comma__3__greater__wrapper::default_StoppingEventHasOccurred ) );
        
        }
        { //::AbstractCellBasedSimulation< 3, 3 >::UpdateCellPopulation
        
            typedef OffLatticeSimulation< 3, 3 > exported_class_t;
            typedef void ( OffLatticeSimulation_less__3_comma__3__greater__wrapper::*UpdateCellPopulation_function_type)(  ) ;
            
            OffLatticeSimulation3_3_exposer.def( 
                "UpdateCellPopulation"
                , UpdateCellPopulation_function_type( &OffLatticeSimulation_less__3_comma__3__greater__wrapper::default_UpdateCellPopulation ) );
        
        }
    }

}
