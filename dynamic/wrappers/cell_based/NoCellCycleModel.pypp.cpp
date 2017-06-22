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
#include "NoCellCycleModel.pypp.hpp"

namespace bp = boost::python;

struct NoCellCycleModel_wrapper : NoCellCycleModel, bp::wrapper< NoCellCycleModel > {

    NoCellCycleModel_wrapper(NoCellCycleModel const & arg )
    : NoCellCycleModel( arg )
      , bp::wrapper< NoCellCycleModel >(){
        // copy constructor
        
    }

    NoCellCycleModel_wrapper( )
    : NoCellCycleModel( )
      , bp::wrapper< NoCellCycleModel >(){
        // null constructor
    
    }

    virtual ::AbstractCellCycleModel * CreateCellCycleModel(  ) {
        if( bp::override func_CreateCellCycleModel = this->get_override( "CreateCellCycleModel" ) )
            return func_CreateCellCycleModel(  );
        else{
            return this->NoCellCycleModel::CreateCellCycleModel(  );
        }
    }
    
    ::AbstractCellCycleModel * default_CreateCellCycleModel(  ) {
        return NoCellCycleModel::CreateCellCycleModel( );
    }

    virtual double GetAverageStemCellCycleTime(  ) {
        if( bp::override func_GetAverageStemCellCycleTime = this->get_override( "GetAverageStemCellCycleTime" ) )
            return func_GetAverageStemCellCycleTime(  );
        else{
            return this->NoCellCycleModel::GetAverageStemCellCycleTime(  );
        }
    }
    
    double default_GetAverageStemCellCycleTime(  ) {
        return NoCellCycleModel::GetAverageStemCellCycleTime( );
    }

    virtual double GetAverageTransitCellCycleTime(  ) {
        if( bp::override func_GetAverageTransitCellCycleTime = this->get_override( "GetAverageTransitCellCycleTime" ) )
            return func_GetAverageTransitCellCycleTime(  );
        else{
            return this->NoCellCycleModel::GetAverageTransitCellCycleTime(  );
        }
    }
    
    double default_GetAverageTransitCellCycleTime(  ) {
        return NoCellCycleModel::GetAverageTransitCellCycleTime( );
    }

    virtual void OutputCellCycleModelParameters( ::out_stream & rParamsFile ) {
        if( bp::override func_OutputCellCycleModelParameters = this->get_override( "OutputCellCycleModelParameters" ) )
            func_OutputCellCycleModelParameters( rParamsFile );
        else{
            this->NoCellCycleModel::OutputCellCycleModelParameters( rParamsFile );
        }
    }
    
    void default_OutputCellCycleModelParameters( ::out_stream & rParamsFile ) {
        NoCellCycleModel::OutputCellCycleModelParameters( rParamsFile );
    }

    virtual bool ReadyToDivide(  ) {
        if( bp::override func_ReadyToDivide = this->get_override( "ReadyToDivide" ) )
            return func_ReadyToDivide(  );
        else{
            return this->NoCellCycleModel::ReadyToDivide(  );
        }
    }
    
    bool default_ReadyToDivide(  ) {
        return NoCellCycleModel::ReadyToDivide( );
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
            this->AbstractCellCycleModel::Initialise(  );
        }
    }
    
    void default_Initialise(  ) {
        AbstractCellCycleModel::Initialise( );
    }

    virtual void InitialiseDaughterCell(  ) {
        if( bp::override func_InitialiseDaughterCell = this->get_override( "InitialiseDaughterCell" ) )
            func_InitialiseDaughterCell(  );
        else{
            this->AbstractCellCycleModel::InitialiseDaughterCell(  );
        }
    }
    
    void default_InitialiseDaughterCell(  ) {
        AbstractCellCycleModel::InitialiseDaughterCell( );
    }

    virtual void ResetForDivision(  ) {
        if( bp::override func_ResetForDivision = this->get_override( "ResetForDivision" ) )
            func_ResetForDivision(  );
        else{
            this->AbstractCellCycleModel::ResetForDivision(  );
        }
    }
    
    void default_ResetForDivision(  ) {
        AbstractCellCycleModel::ResetForDivision( );
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

void register_NoCellCycleModel_class(){

    bp::class_< NoCellCycleModel_wrapper, bp::bases< AbstractCellCycleModel > >( "NoCellCycleModel", bp::init< >() )    
        .def( 
            "CreateCellCycleModel"
            , (::AbstractCellCycleModel * ( ::NoCellCycleModel::* )(  ))(&::NoCellCycleModel::CreateCellCycleModel)
            , (::AbstractCellCycleModel * ( NoCellCycleModel_wrapper::* )(  ))(&NoCellCycleModel_wrapper::default_CreateCellCycleModel)
            , bp::return_value_policy< bp::reference_existing_object >() )    
        .def( 
            "GetAverageStemCellCycleTime"
            , (double ( ::NoCellCycleModel::* )(  ))(&::NoCellCycleModel::GetAverageStemCellCycleTime)
            , (double ( NoCellCycleModel_wrapper::* )(  ))(&NoCellCycleModel_wrapper::default_GetAverageStemCellCycleTime) )    
        .def( 
            "GetAverageTransitCellCycleTime"
            , (double ( ::NoCellCycleModel::* )(  ))(&::NoCellCycleModel::GetAverageTransitCellCycleTime)
            , (double ( NoCellCycleModel_wrapper::* )(  ))(&NoCellCycleModel_wrapper::default_GetAverageTransitCellCycleTime) )    
        .def( 
            "OutputCellCycleModelParameters"
            , (void ( ::NoCellCycleModel::* )( ::out_stream & ))(&::NoCellCycleModel::OutputCellCycleModelParameters)
            , (void ( NoCellCycleModel_wrapper::* )( ::out_stream & ))(&NoCellCycleModel_wrapper::default_OutputCellCycleModelParameters)
            , ( bp::arg("rParamsFile") ) )    
        .def( 
            "ReadyToDivide"
            , (bool ( ::NoCellCycleModel::* )(  ))(&::NoCellCycleModel::ReadyToDivide)
            , (bool ( NoCellCycleModel_wrapper::* )(  ))(&NoCellCycleModel_wrapper::default_ReadyToDivide) )    
        .def( 
            "CanCellTerminallyDifferentiate"
            , (bool ( ::AbstractCellCycleModel::* )(  ))(&::AbstractCellCycleModel::CanCellTerminallyDifferentiate)
            , (bool ( NoCellCycleModel_wrapper::* )(  ))(&NoCellCycleModel_wrapper::default_CanCellTerminallyDifferentiate) )    
        .def( 
            "Initialise"
            , (void ( ::AbstractCellCycleModel::* )(  ))(&::AbstractCellCycleModel::Initialise)
            , (void ( NoCellCycleModel_wrapper::* )(  ))(&NoCellCycleModel_wrapper::default_Initialise) )    
        .def( 
            "InitialiseDaughterCell"
            , (void ( ::AbstractCellCycleModel::* )(  ))(&::AbstractCellCycleModel::InitialiseDaughterCell)
            , (void ( NoCellCycleModel_wrapper::* )(  ))(&NoCellCycleModel_wrapper::default_InitialiseDaughterCell) )    
        .def( 
            "ResetForDivision"
            , (void ( ::AbstractCellCycleModel::* )(  ))(&::AbstractCellCycleModel::ResetForDivision)
            , (void ( NoCellCycleModel_wrapper::* )(  ))(&NoCellCycleModel_wrapper::default_ResetForDivision) )    
        .def( 
            "SetBirthTime"
            , (void ( ::AbstractCellCycleModel::* )( double ))(&::AbstractCellCycleModel::SetBirthTime)
            , (void ( NoCellCycleModel_wrapper::* )( double ))(&NoCellCycleModel_wrapper::default_SetBirthTime)
            , ( bp::arg("birthTime") ) );

}
