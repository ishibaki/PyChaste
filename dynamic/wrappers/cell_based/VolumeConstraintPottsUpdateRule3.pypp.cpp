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
#include "VolumeConstraintPottsUpdateRule3.pypp.hpp"

namespace bp = boost::python;

struct VolumeConstraintPottsUpdateRule_less__3__greater__wrapper : VolumeConstraintPottsUpdateRule< 3 >, bp::wrapper< VolumeConstraintPottsUpdateRule< 3 > > {

    VolumeConstraintPottsUpdateRule_less__3__greater__wrapper(VolumeConstraintPottsUpdateRule<3> const & arg )
    : VolumeConstraintPottsUpdateRule<3>( arg )
      , bp::wrapper< VolumeConstraintPottsUpdateRule< 3 > >(){
        // copy constructor
        
    }

    VolumeConstraintPottsUpdateRule_less__3__greater__wrapper( )
    : VolumeConstraintPottsUpdateRule<3>( )
      , bp::wrapper< VolumeConstraintPottsUpdateRule< 3 > >(){
        // null constructor
    
    }

    virtual double EvaluateHamiltonianContribution( unsigned int currentNodeIndex, unsigned int targetNodeIndex, ::PottsBasedCellPopulation< 3 > & rCellPopulation ) {
        if( bp::override func_EvaluateHamiltonianContribution = this->get_override( "EvaluateHamiltonianContribution" ) )
            return func_EvaluateHamiltonianContribution( currentNodeIndex, targetNodeIndex, boost::ref(rCellPopulation) );
        else{
            return this->VolumeConstraintPottsUpdateRule< 3 >::EvaluateHamiltonianContribution( currentNodeIndex, targetNodeIndex, boost::ref(rCellPopulation) );
        }
    }
    
    double default_EvaluateHamiltonianContribution( unsigned int currentNodeIndex, unsigned int targetNodeIndex, ::PottsBasedCellPopulation< 3 > & rCellPopulation ) {
        return VolumeConstraintPottsUpdateRule< 3 >::EvaluateHamiltonianContribution( currentNodeIndex, targetNodeIndex, boost::ref(rCellPopulation) );
    }

    virtual void OutputUpdateRuleParameters( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputUpdateRuleParameters = this->get_override( "OutputUpdateRuleParameters" ) )
            func_OutputUpdateRuleParameters( rParamsFile );
        else{
            this->VolumeConstraintPottsUpdateRule< 3 >::OutputUpdateRuleParameters( rParamsFile );
        }
    }
    
    void default_OutputUpdateRuleParameters( ::out_stream & rParamsFile ) {
        VolumeConstraintPottsUpdateRule< 3 >::OutputUpdateRuleParameters( rParamsFile );
    }

};

void register_VolumeConstraintPottsUpdateRule3_class(){

    bp::class_< VolumeConstraintPottsUpdateRule_less__3__greater__wrapper, bp::bases< AbstractPottsUpdateRule< 3 > > >( "VolumeConstraintPottsUpdateRule3", bp::init< >() )    
        .def( 
            "EvaluateHamiltonianContribution"
            , (double ( ::VolumeConstraintPottsUpdateRule<3>::* )( unsigned int,unsigned int,::PottsBasedCellPopulation< 3 > & ))(&::VolumeConstraintPottsUpdateRule< 3 >::EvaluateHamiltonianContribution)
            , (double ( VolumeConstraintPottsUpdateRule_less__3__greater__wrapper::* )( unsigned int,unsigned int,::PottsBasedCellPopulation< 3 > & ))(&VolumeConstraintPottsUpdateRule_less__3__greater__wrapper::default_EvaluateHamiltonianContribution)
            , ( bp::arg("currentNodeIndex"), bp::arg("targetNodeIndex"), bp::arg("rCellPopulation") ) )    
        .def( 
            "GetDeformationEnergyParameter"
            , (double ( ::VolumeConstraintPottsUpdateRule<3>::* )(  ))( &::VolumeConstraintPottsUpdateRule< 3 >::GetDeformationEnergyParameter ) )    
        .def( 
            "GetMatureCellTargetVolume"
            , (double ( ::VolumeConstraintPottsUpdateRule<3>::* )(  )const)( &::VolumeConstraintPottsUpdateRule< 3 >::GetMatureCellTargetVolume ) )    
        .def( 
            "OutputUpdateRuleParameters"
            , (void ( ::VolumeConstraintPottsUpdateRule<3>::* )( ::out_stream & ))(&::VolumeConstraintPottsUpdateRule< 3 >::OutputUpdateRuleParameters)
            , (void ( VolumeConstraintPottsUpdateRule_less__3__greater__wrapper::* )( ::out_stream & ))(&VolumeConstraintPottsUpdateRule_less__3__greater__wrapper::default_OutputUpdateRuleParameters)
            , ( bp::arg("rParamsFile") ) )    
        .def( 
            "SetDeformationEnergyParameter"
            , (void ( ::VolumeConstraintPottsUpdateRule<3>::* )( double ))( &::VolumeConstraintPottsUpdateRule< 3 >::SetDeformationEnergyParameter )
            , ( bp::arg("deformationEnergyParameter") ) )    
        .def( 
            "SetMatureCellTargetVolume"
            , (void ( ::VolumeConstraintPottsUpdateRule<3>::* )( double ))( &::VolumeConstraintPottsUpdateRule< 3 >::SetMatureCellTargetVolume )
            , ( bp::arg("matureCellTargetVolume") ) );

}
