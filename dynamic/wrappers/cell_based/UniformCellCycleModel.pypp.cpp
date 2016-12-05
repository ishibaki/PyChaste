// This file has been generated by Py++.


/*

Copyright (c) 2005-2016, University of Oxford.
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
#include "cell_based_headers.hpp"
#include "UniformCellCycleModel.pypp.hpp"

namespace bp = boost::python;

struct UniformCellCycleModel_wrapper : UniformCellCycleModel, bp::wrapper< UniformCellCycleModel > {

    UniformCellCycleModel_wrapper(::UniformCellCycleModel const & rModel )
    : UniformCellCycleModel( boost::ref(rModel) )
      , bp::wrapper< UniformCellCycleModel >(){
        // copy constructor
    
    }

    UniformCellCycleModel_wrapper( )
    : UniformCellCycleModel( )
      , bp::wrapper< UniformCellCycleModel >(){
        // null constructor
    
    }

    virtual ::AbstractCellCycleModel * CreateCellCycleModel(  ) {
        if( bp::override func_CreateCellCycleModel = this->get_override( "CreateCellCycleModel" ) )
            return func_CreateCellCycleModel(  );
        else{
            return this->UniformCellCycleModel::CreateCellCycleModel(  );
        }
    }
    
    ::AbstractCellCycleModel * default_CreateCellCycleModel(  ) {
        return UniformCellCycleModel::CreateCellCycleModel( );
    }

    virtual double GetAverageStemCellCycleTime(  ) {
        if( bp::override func_GetAverageStemCellCycleTime = this->get_override( "GetAverageStemCellCycleTime" ) )
            return func_GetAverageStemCellCycleTime(  );
        else{
            return this->UniformCellCycleModel::GetAverageStemCellCycleTime(  );
        }
    }
    
    double default_GetAverageStemCellCycleTime(  ) {
        return UniformCellCycleModel::GetAverageStemCellCycleTime( );
    }

    virtual double GetAverageTransitCellCycleTime(  ) {
        if( bp::override func_GetAverageTransitCellCycleTime = this->get_override( "GetAverageTransitCellCycleTime" ) )
            return func_GetAverageTransitCellCycleTime(  );
        else{
            return this->UniformCellCycleModel::GetAverageTransitCellCycleTime(  );
        }
    }
    
    double default_GetAverageTransitCellCycleTime(  ) {
        return UniformCellCycleModel::GetAverageTransitCellCycleTime( );
    }

    virtual void OutputCellCycleModelParameters( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputCellCycleModelParameters = this->get_override( "OutputCellCycleModelParameters" ) )
            func_OutputCellCycleModelParameters( boost::ref(rParamsFile) );
        else{
            this->UniformCellCycleModel::OutputCellCycleModelParameters( boost::ref(rParamsFile) );
        }
    }
    
    void default_OutputCellCycleModelParameters( ::out_stream & rParamsFile ) {
        UniformCellCycleModel::OutputCellCycleModelParameters( boost::ref(rParamsFile) );
    }

    virtual void SetCellCycleDuration(  ) {
        if( bp::override func_SetCellCycleDuration = this->get_override( "SetCellCycleDuration" ) )
            func_SetCellCycleDuration(  );
        else{
            this->UniformCellCycleModel::SetCellCycleDuration(  );
        }
    }
    
    void default_SetCellCycleDuration(  ) {
        UniformCellCycleModel::SetCellCycleDuration( );
    }

    virtual bool CanCellTerminallyDifferentiate(  ) {
        if( bp::override func_CanCellTerminallyDifferentiate = this->get_override( "CanCellTerminallyDifferentiate" ) )
            return func_CanCellTerminallyDifferentiate(  );
        else{
            return this->AbstractCellCycleModel::CanCellTerminallyDifferentiate(  );
        }
    }
    
    bool default_CanCellTerminallyDifferentiate(  ) {
        return AbstractCellCycleModel::CanCellTerminallyDifferentiate( );
    }

    virtual void Initialise(  ) {
        if( bp::override func_Initialise = this->get_override( "Initialise" ) )
            func_Initialise(  );
        else{
            this->AbstractSimpleCellCycleModel::Initialise(  );
        }
    }
    
    void default_Initialise(  ) {
        AbstractSimpleCellCycleModel::Initialise( );
    }

    virtual void InitialiseDaughterCell(  ) {
        if( bp::override func_InitialiseDaughterCell = this->get_override( "InitialiseDaughterCell" ) )
            func_InitialiseDaughterCell(  );
        else{
            this->AbstractSimpleCellCycleModel::InitialiseDaughterCell(  );
        }
    }
    
    void default_InitialiseDaughterCell(  ) {
        AbstractSimpleCellCycleModel::InitialiseDaughterCell( );
    }

    virtual bool ReadyToDivide(  ) {
        if( bp::override func_ReadyToDivide = this->get_override( "ReadyToDivide" ) )
            return func_ReadyToDivide(  );
        else{
            return this->AbstractSimpleCellCycleModel::ReadyToDivide(  );
        }
    }
    
    bool default_ReadyToDivide(  ) {
        return AbstractSimpleCellCycleModel::ReadyToDivide( );
    }

    virtual void ResetForDivision(  ) {
        if( bp::override func_ResetForDivision = this->get_override( "ResetForDivision" ) )
            func_ResetForDivision(  );
        else{
            this->AbstractSimpleCellCycleModel::ResetForDivision(  );
        }
    }
    
    void default_ResetForDivision(  ) {
        AbstractSimpleCellCycleModel::ResetForDivision( );
    }

    virtual void SetBirthTime( double birthTime ) {
        if( bp::override func_SetBirthTime = this->get_override( "SetBirthTime" ) )
            func_SetBirthTime( birthTime );
        else{
            this->AbstractCellCycleModel::SetBirthTime( birthTime );
        }
    }
    
    void default_SetBirthTime( double birthTime ) {
        AbstractCellCycleModel::SetBirthTime( birthTime );
    }

};

void register_UniformCellCycleModel_class(){

    bp::class_< UniformCellCycleModel_wrapper, bp::bases< AbstractSimpleCellCycleModel >, boost::noncopyable >( "UniformCellCycleModel", bp::init< UniformCellCycleModel const & >(( bp::arg("rModel") )) )    
        .def( bp::init< >() )    
        .def( 
            "CreateCellCycleModel"
            , (::AbstractCellCycleModel * ( ::UniformCellCycleModel::* )(  ))(&::UniformCellCycleModel::CreateCellCycleModel)
            , (::AbstractCellCycleModel * ( UniformCellCycleModel_wrapper::* )(  ))(&UniformCellCycleModel_wrapper::default_CreateCellCycleModel)
            , bp::return_value_policy< bp::manage_new_object >() )    
        .def( 
            "GetAverageStemCellCycleTime"
            , (double ( ::UniformCellCycleModel::* )(  ))(&::UniformCellCycleModel::GetAverageStemCellCycleTime)
            , (double ( UniformCellCycleModel_wrapper::* )(  ))(&UniformCellCycleModel_wrapper::default_GetAverageStemCellCycleTime) )    
        .def( 
            "GetAverageTransitCellCycleTime"
            , (double ( ::UniformCellCycleModel::* )(  ))(&::UniformCellCycleModel::GetAverageTransitCellCycleTime)
            , (double ( UniformCellCycleModel_wrapper::* )(  ))(&UniformCellCycleModel_wrapper::default_GetAverageTransitCellCycleTime) )    
        .def( 
            "GetMaxCellCycleDuration"
            , (double ( ::UniformCellCycleModel::* )(  ))( &::UniformCellCycleModel::GetMaxCellCycleDuration ) )    
        .def( 
            "GetMinCellCycleDuration"
            , (double ( ::UniformCellCycleModel::* )(  ))( &::UniformCellCycleModel::GetMinCellCycleDuration ) )    
        .def( 
            "OutputCellCycleModelParameters"
            , (void ( ::UniformCellCycleModel::* )( ::out_stream & ))(&::UniformCellCycleModel::OutputCellCycleModelParameters)
            , (void ( UniformCellCycleModel_wrapper::* )( ::out_stream & ))(&UniformCellCycleModel_wrapper::default_OutputCellCycleModelParameters)
            , ( bp::arg("rParamsFile") ) )    
        .def( 
            "SetCellCycleDuration"
            , (void ( ::UniformCellCycleModel::* )(  ))(&::UniformCellCycleModel::SetCellCycleDuration)
            , (void ( UniformCellCycleModel_wrapper::* )(  ))(&UniformCellCycleModel_wrapper::default_SetCellCycleDuration) )    
        .def( 
            "SetMaxCellCycleDuration"
            , (void ( ::UniformCellCycleModel::* )( double ))( &::UniformCellCycleModel::SetMaxCellCycleDuration )
            , ( bp::arg("maxCellCycleDuration") ) )    
        .def( 
            "SetMinCellCycleDuration"
            , (void ( ::UniformCellCycleModel::* )( double ))( &::UniformCellCycleModel::SetMinCellCycleDuration )
            , ( bp::arg("minCellCycleDuration") ) )    
        .def( 
            "CanCellTerminallyDifferentiate"
            , (bool ( ::AbstractCellCycleModel::* )(  ))(&::AbstractCellCycleModel::CanCellTerminallyDifferentiate)
            , (bool ( UniformCellCycleModel_wrapper::* )(  ))(&UniformCellCycleModel_wrapper::default_CanCellTerminallyDifferentiate) )    
        .def( 
            "Initialise"
            , (void ( ::AbstractSimpleCellCycleModel::* )(  ))(&::AbstractSimpleCellCycleModel::Initialise)
            , (void ( UniformCellCycleModel_wrapper::* )(  ))(&UniformCellCycleModel_wrapper::default_Initialise) )    
        .def( 
            "InitialiseDaughterCell"
            , (void ( ::AbstractSimpleCellCycleModel::* )(  ))(&::AbstractSimpleCellCycleModel::InitialiseDaughterCell)
            , (void ( UniformCellCycleModel_wrapper::* )(  ))(&UniformCellCycleModel_wrapper::default_InitialiseDaughterCell) )    
        .def( 
            "ReadyToDivide"
            , (bool ( ::AbstractSimpleCellCycleModel::* )(  ))(&::AbstractSimpleCellCycleModel::ReadyToDivide)
            , (bool ( UniformCellCycleModel_wrapper::* )(  ))(&UniformCellCycleModel_wrapper::default_ReadyToDivide) )    
        .def( 
            "ResetForDivision"
            , (void ( ::AbstractSimpleCellCycleModel::* )(  ))(&::AbstractSimpleCellCycleModel::ResetForDivision)
            , (void ( UniformCellCycleModel_wrapper::* )(  ))(&UniformCellCycleModel_wrapper::default_ResetForDivision) )    
        .def( 
            "SetBirthTime"
            , (void ( ::AbstractCellCycleModel::* )( double ))(&::AbstractCellCycleModel::SetBirthTime)
            , (void ( UniformCellCycleModel_wrapper::* )( double ))(&UniformCellCycleModel_wrapper::default_SetBirthTime)
            , ( bp::arg("birthTime") ) );

}