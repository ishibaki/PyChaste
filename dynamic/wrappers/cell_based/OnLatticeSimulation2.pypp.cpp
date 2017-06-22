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
#include "OnLatticeSimulation2.pypp.hpp"

namespace bp = boost::python;

struct OnLatticeSimulation_less__2__greater__wrapper : OnLatticeSimulation< 2 >, bp::wrapper< OnLatticeSimulation< 2 > > {

    OnLatticeSimulation_less__2__greater__wrapper(::AbstractCellPopulation< 2, 2 > & rCellPopulation, bool deleteCellPopulationInDestructor=false, bool initialiseCells=true )
    : OnLatticeSimulation<2>( boost::ref(rCellPopulation), deleteCellPopulationInDestructor, initialiseCells )
      , bp::wrapper< OnLatticeSimulation< 2 > >(){
        // constructor
    
    }

    virtual void OutputAdditionalSimulationSetup( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputAdditionalSimulationSetup = this->get_override( "OutputAdditionalSimulationSetup" ) )
            func_OutputAdditionalSimulationSetup( rParamsFile );
        else{
            this->OnLatticeSimulation< 2 >::OutputAdditionalSimulationSetup( rParamsFile );
        }
    }
    
    void default_OutputAdditionalSimulationSetup( ::out_stream & rParamsFile ) {
        OnLatticeSimulation< 2 >::OutputAdditionalSimulationSetup( rParamsFile );
    }

    virtual void OutputSimulationParameters( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputSimulationParameters = this->get_override( "OutputSimulationParameters" ) )
            func_OutputSimulationParameters( rParamsFile );
        else{
            this->OnLatticeSimulation< 2 >::OutputSimulationParameters( rParamsFile );
        }
    }
    
    void default_OutputSimulationParameters( ::out_stream & rParamsFile ) {
        OnLatticeSimulation< 2 >::OutputSimulationParameters( rParamsFile );
    }

    virtual void UpdateCellLocationsAndTopology(  ){
        if( bp::override func_UpdateCellLocationsAndTopology = this->get_override( "UpdateCellLocationsAndTopology" ) )
            func_UpdateCellLocationsAndTopology(  );
        else{
            this->OnLatticeSimulation< 2 >::UpdateCellLocationsAndTopology(  );
        }
    }
    
    virtual void default_UpdateCellLocationsAndTopology(  ){
        OnLatticeSimulation< 2 >::UpdateCellLocationsAndTopology( );
    }

    virtual void UpdateCellPopulation(  ){
        if( bp::override func_UpdateCellPopulation = this->get_override( "UpdateCellPopulation" ) )
            func_UpdateCellPopulation(  );
        else{
            this->OnLatticeSimulation< 2 >::UpdateCellPopulation(  );
        }
    }
    
    virtual void default_UpdateCellPopulation(  ){
        OnLatticeSimulation< 2 >::UpdateCellPopulation( );
    }

    virtual unsigned int DoCellBirth(  ){
        if( bp::override func_DoCellBirth = this->get_override( "DoCellBirth" ) )
            return func_DoCellBirth(  );
        else{
            return this->AbstractCellBasedSimulation< 2, 2 >::DoCellBirth(  );
        }
    }
    
    virtual unsigned int default_DoCellBirth(  ){
        return AbstractCellBasedSimulation< 2, 2 >::DoCellBirth( );
    }

    unsigned int DoCellRemoval(  ){
        return AbstractCellBasedSimulation< 2, 2 >::DoCellRemoval(  );
    }

    void OutputSimulationSetup(  ){
        AbstractCellBasedSimulation< 2, 2 >::OutputSimulationSetup(  );
    }

    virtual void SetupSolve(  ){
        if( bp::override func_SetupSolve = this->get_override( "SetupSolve" ) )
            func_SetupSolve(  );
        else{
            this->AbstractCellBasedSimulation< 2, 2 >::SetupSolve(  );
        }
    }
    
    virtual void default_SetupSolve(  ){
        AbstractCellBasedSimulation< 2, 2 >::SetupSolve( );
    }

    virtual bool StoppingEventHasOccurred(  ){
        if( bp::override func_StoppingEventHasOccurred = this->get_override( "StoppingEventHasOccurred" ) )
            return func_StoppingEventHasOccurred(  );
        else{
            return this->AbstractCellBasedSimulation< 2, 2 >::StoppingEventHasOccurred(  );
        }
    }
    
    virtual bool default_StoppingEventHasOccurred(  ){
        return AbstractCellBasedSimulation< 2, 2 >::StoppingEventHasOccurred( );
    }

    virtual void WriteVisualizerSetupFile(  ){
        if( bp::override func_WriteVisualizerSetupFile = this->get_override( "WriteVisualizerSetupFile" ) )
            func_WriteVisualizerSetupFile(  );
        else{
            this->AbstractCellBasedSimulation< 2, 2 >::WriteVisualizerSetupFile(  );
        }
    }
    
    virtual void default_WriteVisualizerSetupFile(  ){
        AbstractCellBasedSimulation< 2, 2 >::WriteVisualizerSetupFile( );
    }

};

void register_OnLatticeSimulation2_class(){

    { //::OnLatticeSimulation< 2 >
        typedef bp::class_< OnLatticeSimulation_less__2__greater__wrapper, bp::bases< AbstractCellBasedSimulation< 2, 2 > >, boost::noncopyable > OnLatticeSimulation2_exposer_t;
        OnLatticeSimulation2_exposer_t OnLatticeSimulation2_exposer = OnLatticeSimulation2_exposer_t( "OnLatticeSimulation2", bp::init< AbstractCellPopulation< 2, 2 > &, bp::optional< bool, bool > >(( bp::arg("rCellPopulation"), bp::arg("deleteCellPopulationInDestructor")=(bool)(false), bp::arg("initialiseCells")=(bool)(true) )) );
        bp::scope OnLatticeSimulation2_scope( OnLatticeSimulation2_exposer );
        bp::implicitly_convertible< AbstractCellPopulation< 2, 2 > &, OnLatticeSimulation< 2 > >();
        { //::OnLatticeSimulation< 2 >::AddUpdateRule
        
            typedef OnLatticeSimulation< 2 > exported_class_t;
            typedef void ( exported_class_t::*AddUpdateRule_function_type)( ::boost::shared_ptr< AbstractUpdateRule< 2 > > ) ;
            
            OnLatticeSimulation2_exposer.def( 
                "AddUpdateRule"
                , AddUpdateRule_function_type( &::OnLatticeSimulation< 2 >::AddUpdateRule )
                , ( bp::arg("pUpdateRule") ) );
        
        }
        { //::OnLatticeSimulation< 2 >::OutputAdditionalSimulationSetup
        
            typedef OnLatticeSimulation< 2 > exported_class_t;
            typedef void ( exported_class_t::*OutputAdditionalSimulationSetup_function_type)( ::out_stream & ) ;
            typedef void ( OnLatticeSimulation_less__2__greater__wrapper::*default_OutputAdditionalSimulationSetup_function_type)( ::out_stream & ) ;
            
            OnLatticeSimulation2_exposer.def( 
                "OutputAdditionalSimulationSetup"
                , OutputAdditionalSimulationSetup_function_type(&::OnLatticeSimulation< 2 >::OutputAdditionalSimulationSetup)
                , default_OutputAdditionalSimulationSetup_function_type(&OnLatticeSimulation_less__2__greater__wrapper::default_OutputAdditionalSimulationSetup)
                , ( bp::arg("rParamsFile") ) );
        
        }
        { //::OnLatticeSimulation< 2 >::OutputSimulationParameters
        
            typedef OnLatticeSimulation< 2 > exported_class_t;
            typedef void ( exported_class_t::*OutputSimulationParameters_function_type)( ::out_stream & ) ;
            typedef void ( OnLatticeSimulation_less__2__greater__wrapper::*default_OutputSimulationParameters_function_type)( ::out_stream & ) ;
            
            OnLatticeSimulation2_exposer.def( 
                "OutputSimulationParameters"
                , OutputSimulationParameters_function_type(&::OnLatticeSimulation< 2 >::OutputSimulationParameters)
                , default_OutputSimulationParameters_function_type(&OnLatticeSimulation_less__2__greater__wrapper::default_OutputSimulationParameters)
                , ( bp::arg("rParamsFile") ) );
        
        }
        { //::OnLatticeSimulation< 2 >::RemoveAllUpdateRules
        
            typedef OnLatticeSimulation< 2 > exported_class_t;
            typedef void ( exported_class_t::*RemoveAllUpdateRules_function_type)(  ) ;
            
            OnLatticeSimulation2_exposer.def( 
                "RemoveAllUpdateRules"
                , RemoveAllUpdateRules_function_type( &::OnLatticeSimulation< 2 >::RemoveAllUpdateRules ) );
        
        }
        { //::OnLatticeSimulation< 2 >::UpdateCellLocationsAndTopology
        
            typedef OnLatticeSimulation< 2 > exported_class_t;
            typedef void ( OnLatticeSimulation_less__2__greater__wrapper::*UpdateCellLocationsAndTopology_function_type)(  ) ;
            
            OnLatticeSimulation2_exposer.def( 
                "UpdateCellLocationsAndTopology"
                , UpdateCellLocationsAndTopology_function_type( &OnLatticeSimulation_less__2__greater__wrapper::default_UpdateCellLocationsAndTopology ) );
        
        }
        { //::OnLatticeSimulation< 2 >::UpdateCellPopulation
        
            typedef OnLatticeSimulation< 2 > exported_class_t;
            typedef void ( OnLatticeSimulation_less__2__greater__wrapper::*UpdateCellPopulation_function_type)(  ) ;
            
            OnLatticeSimulation2_exposer.def( 
                "UpdateCellPopulation"
                , UpdateCellPopulation_function_type( &OnLatticeSimulation_less__2__greater__wrapper::default_UpdateCellPopulation ) );
        
        }
        { //::AbstractCellBasedSimulation< 2, 2 >::DoCellBirth
        
            typedef OnLatticeSimulation< 2 > exported_class_t;
            typedef unsigned int ( OnLatticeSimulation_less__2__greater__wrapper::*DoCellBirth_function_type)(  ) ;
            
            OnLatticeSimulation2_exposer.def( 
                "DoCellBirth"
                , DoCellBirth_function_type( &OnLatticeSimulation_less__2__greater__wrapper::default_DoCellBirth ) );
        
        }
        { //::AbstractCellBasedSimulation< 2, 2 >::DoCellRemoval
        
            typedef OnLatticeSimulation< 2 > exported_class_t;
            typedef unsigned int ( OnLatticeSimulation_less__2__greater__wrapper::*DoCellRemoval_function_type)(  ) ;
            
            OnLatticeSimulation2_exposer.def( 
                "DoCellRemoval"
                , DoCellRemoval_function_type( &OnLatticeSimulation_less__2__greater__wrapper::DoCellRemoval ) );
        
        }
        { //::AbstractCellBasedSimulation< 2, 2 >::OutputSimulationSetup
        
            typedef OnLatticeSimulation< 2 > exported_class_t;
            typedef void ( OnLatticeSimulation_less__2__greater__wrapper::*OutputSimulationSetup_function_type)(  ) ;
            
            OnLatticeSimulation2_exposer.def( 
                "OutputSimulationSetup"
                , OutputSimulationSetup_function_type( &OnLatticeSimulation_less__2__greater__wrapper::OutputSimulationSetup ) );
        
        }
        { //::AbstractCellBasedSimulation< 2, 2 >::SetupSolve
        
            typedef OnLatticeSimulation< 2 > exported_class_t;
            typedef void ( OnLatticeSimulation_less__2__greater__wrapper::*SetupSolve_function_type)(  ) ;
            
            OnLatticeSimulation2_exposer.def( 
                "SetupSolve"
                , SetupSolve_function_type( &OnLatticeSimulation_less__2__greater__wrapper::default_SetupSolve ) );
        
        }
        { //::AbstractCellBasedSimulation< 2, 2 >::StoppingEventHasOccurred
        
            typedef OnLatticeSimulation< 2 > exported_class_t;
            typedef bool ( OnLatticeSimulation_less__2__greater__wrapper::*StoppingEventHasOccurred_function_type)(  ) ;
            
            OnLatticeSimulation2_exposer.def( 
                "StoppingEventHasOccurred"
                , StoppingEventHasOccurred_function_type( &OnLatticeSimulation_less__2__greater__wrapper::default_StoppingEventHasOccurred ) );
        
        }
        { //::AbstractCellBasedSimulation< 2, 2 >::WriteVisualizerSetupFile
        
            typedef OnLatticeSimulation< 2 > exported_class_t;
            typedef void ( OnLatticeSimulation_less__2__greater__wrapper::*WriteVisualizerSetupFile_function_type)(  ) ;
            
            OnLatticeSimulation2_exposer.def( 
                "WriteVisualizerSetupFile"
                , WriteVisualizerSetupFile_function_type( &OnLatticeSimulation_less__2__greater__wrapper::default_WriteVisualizerSetupFile ) );
        
        }
    }

}
