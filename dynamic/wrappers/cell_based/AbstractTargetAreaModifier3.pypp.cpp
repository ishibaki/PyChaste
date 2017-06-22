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
#include "AbstractTargetAreaModifier3.pypp.hpp"

namespace bp = boost::python;

struct AbstractTargetAreaModifier_less__3__greater__wrapper : AbstractTargetAreaModifier< 3 >, bp::wrapper< AbstractTargetAreaModifier< 3 > > {

    AbstractTargetAreaModifier_less__3__greater__wrapper( )
    : AbstractTargetAreaModifier<3>( )
      , bp::wrapper< AbstractTargetAreaModifier< 3 > >(){
        // null constructor
    
    }

    virtual void OutputSimulationModifierParameters( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputSimulationModifierParameters = this->get_override( "OutputSimulationModifierParameters" ) )
            func_OutputSimulationModifierParameters( rParamsFile );
        else{
            this->AbstractTargetAreaModifier< 3 >::OutputSimulationModifierParameters( rParamsFile );
        }
    }
    
    void default_OutputSimulationModifierParameters( ::out_stream & rParamsFile ) {
        AbstractTargetAreaModifier< 3 >::OutputSimulationModifierParameters( rParamsFile );
    }

    virtual void SetupSolve( ::AbstractCellPopulation< 3, 3 > & rCellPopulation, ::std::string outputDirectory ) {
        if( bp::override func_SetupSolve = this->get_override( "SetupSolve" ) )
            func_SetupSolve( boost::ref(rCellPopulation), outputDirectory );
        else{
            this->AbstractTargetAreaModifier< 3 >::SetupSolve( boost::ref(rCellPopulation), outputDirectory );
        }
    }
    
    void default_SetupSolve( ::AbstractCellPopulation< 3, 3 > & rCellPopulation, ::std::string outputDirectory ) {
        AbstractTargetAreaModifier< 3 >::SetupSolve( boost::ref(rCellPopulation), outputDirectory );
    }

    virtual void UpdateAtEndOfTimeStep( ::AbstractCellPopulation< 3, 3 > & rCellPopulation ) {
        if( bp::override func_UpdateAtEndOfTimeStep = this->get_override( "UpdateAtEndOfTimeStep" ) )
            func_UpdateAtEndOfTimeStep( boost::ref(rCellPopulation) );
        else{
            this->AbstractTargetAreaModifier< 3 >::UpdateAtEndOfTimeStep( boost::ref(rCellPopulation) );
        }
    }
    
    void default_UpdateAtEndOfTimeStep( ::AbstractCellPopulation< 3, 3 > & rCellPopulation ) {
        AbstractTargetAreaModifier< 3 >::UpdateAtEndOfTimeStep( boost::ref(rCellPopulation) );
    }

    virtual void UpdateTargetAreaOfCell( ::CellPtr const pCell ){
        bp::override func_UpdateTargetAreaOfCell = this->get_override( "UpdateTargetAreaOfCell" );
        func_UpdateTargetAreaOfCell( pCell );
    }

    virtual void UpdateAtEndOfOutputTimeStep( ::AbstractCellPopulation< 3, 3 > & rCellPopulation ) {
        if( bp::override func_UpdateAtEndOfOutputTimeStep = this->get_override( "UpdateAtEndOfOutputTimeStep" ) )
            func_UpdateAtEndOfOutputTimeStep( boost::ref(rCellPopulation) );
        else{
            this->AbstractCellBasedSimulationModifier< 3, 3 >::UpdateAtEndOfOutputTimeStep( boost::ref(rCellPopulation) );
        }
    }
    
    void default_UpdateAtEndOfOutputTimeStep( ::AbstractCellPopulation< 3, 3 > & rCellPopulation ) {
        AbstractCellBasedSimulationModifier< 3, 3 >::UpdateAtEndOfOutputTimeStep( boost::ref(rCellPopulation) );
    }

    virtual void UpdateAtEndOfSolve( ::AbstractCellPopulation< 3, 3 > & rCellPopulation ) {
        if( bp::override func_UpdateAtEndOfSolve = this->get_override( "UpdateAtEndOfSolve" ) )
            func_UpdateAtEndOfSolve( boost::ref(rCellPopulation) );
        else{
            this->AbstractCellBasedSimulationModifier< 3, 3 >::UpdateAtEndOfSolve( boost::ref(rCellPopulation) );
        }
    }
    
    void default_UpdateAtEndOfSolve( ::AbstractCellPopulation< 3, 3 > & rCellPopulation ) {
        AbstractCellBasedSimulationModifier< 3, 3 >::UpdateAtEndOfSolve( boost::ref(rCellPopulation) );
    }

};

void register_AbstractTargetAreaModifier3_class(){

    bp::class_< AbstractTargetAreaModifier_less__3__greater__wrapper, bp::bases< AbstractCellBasedSimulationModifier< 3, 3 > >, boost::noncopyable >( "AbstractTargetAreaModifier3", bp::init< >() )    
        .def( 
            "GetReferenceTargetArea"
            , (double ( ::AbstractTargetAreaModifier<3>::* )(  ))( &::AbstractTargetAreaModifier< 3 >::GetReferenceTargetArea ) )    
        .def( 
            "OutputSimulationModifierParameters"
            , (void ( ::AbstractTargetAreaModifier<3>::* )( ::out_stream & ))(&::AbstractTargetAreaModifier< 3 >::OutputSimulationModifierParameters)
            , (void ( AbstractTargetAreaModifier_less__3__greater__wrapper::* )( ::out_stream & ))(&AbstractTargetAreaModifier_less__3__greater__wrapper::default_OutputSimulationModifierParameters)
            , ( bp::arg("rParamsFile") ) )    
        .def( 
            "SetReferenceTargetArea"
            , (void ( ::AbstractTargetAreaModifier<3>::* )( double ))( &::AbstractTargetAreaModifier< 3 >::SetReferenceTargetArea )
            , ( bp::arg("referenceTargetArea") ) )    
        .def( 
            "SetupSolve"
            , (void ( ::AbstractTargetAreaModifier<3>::* )( ::AbstractCellPopulation< 3, 3 > &,::std::string ))(&::AbstractTargetAreaModifier< 3 >::SetupSolve)
            , (void ( AbstractTargetAreaModifier_less__3__greater__wrapper::* )( ::AbstractCellPopulation< 3, 3 > &,::std::string ))(&AbstractTargetAreaModifier_less__3__greater__wrapper::default_SetupSolve)
            , ( bp::arg("rCellPopulation"), bp::arg("outputDirectory") ) )    
        .def( 
            "UpdateAtEndOfTimeStep"
            , (void ( ::AbstractTargetAreaModifier<3>::* )( ::AbstractCellPopulation< 3, 3 > & ))(&::AbstractTargetAreaModifier< 3 >::UpdateAtEndOfTimeStep)
            , (void ( AbstractTargetAreaModifier_less__3__greater__wrapper::* )( ::AbstractCellPopulation< 3, 3 > & ))(&AbstractTargetAreaModifier_less__3__greater__wrapper::default_UpdateAtEndOfTimeStep)
            , ( bp::arg("rCellPopulation") ) )    
        .def( 
            "UpdateTargetAreaOfCell"
            , bp::pure_virtual( (void ( ::AbstractTargetAreaModifier<3>::* )( ::CellPtr const ))(&::AbstractTargetAreaModifier< 3 >::UpdateTargetAreaOfCell) )
            , ( bp::arg("pCell") ) )    
        .def( 
            "UpdateTargetAreas"
            , (void ( ::AbstractTargetAreaModifier<3>::* )( ::AbstractCellPopulation< 3, 3 > & ))( &::AbstractTargetAreaModifier< 3 >::UpdateTargetAreas )
            , ( bp::arg("rCellPopulation") ) )    
        .def( 
            "UpdateAtEndOfOutputTimeStep"
            , (void ( ::AbstractCellBasedSimulationModifier<3, 3>::* )( ::AbstractCellPopulation< 3, 3 > & ))(&::AbstractCellBasedSimulationModifier< 3, 3 >::UpdateAtEndOfOutputTimeStep)
            , (void ( AbstractTargetAreaModifier_less__3__greater__wrapper::* )( ::AbstractCellPopulation< 3, 3 > & ))(&AbstractTargetAreaModifier_less__3__greater__wrapper::default_UpdateAtEndOfOutputTimeStep)
            , ( bp::arg("rCellPopulation") ) )    
        .def( 
            "UpdateAtEndOfSolve"
            , (void ( ::AbstractCellBasedSimulationModifier<3, 3>::* )( ::AbstractCellPopulation< 3, 3 > & ))(&::AbstractCellBasedSimulationModifier< 3, 3 >::UpdateAtEndOfSolve)
            , (void ( AbstractTargetAreaModifier_less__3__greater__wrapper::* )( ::AbstractCellPopulation< 3, 3 > & ))(&AbstractTargetAreaModifier_less__3__greater__wrapper::default_UpdateAtEndOfSolve)
            , ( bp::arg("rCellPopulation") ) );

}
