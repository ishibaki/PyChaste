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
#include "visualization_headers.hpp"
#include "CellPopulationPyChasteActorGenerator2.pypp.hpp"

namespace bp = boost::python;

struct CellPopulationPyChasteActorGenerator_less__2__greater__wrapper : CellPopulationPyChasteActorGenerator< 2 >, bp::wrapper< CellPopulationPyChasteActorGenerator< 2 > > {

    CellPopulationPyChasteActorGenerator_less__2__greater__wrapper(CellPopulationPyChasteActorGenerator<2> const & arg )
    : CellPopulationPyChasteActorGenerator<2>( arg )
      , bp::wrapper< CellPopulationPyChasteActorGenerator< 2 > >(){
        // copy constructor
        
    }

    CellPopulationPyChasteActorGenerator_less__2__greater__wrapper( )
    : CellPopulationPyChasteActorGenerator<2>( )
      , bp::wrapper< CellPopulationPyChasteActorGenerator< 2 > >(){
        // null constructor
    
    }

    virtual void AddActor( ::vtkSmartPointer< vtkRenderer > pRenderer ) {
        if( bp::override func_AddActor = this->get_override( "AddActor" ) )
            func_AddActor( pRenderer );
        else{
            this->CellPopulationPyChasteActorGenerator< 2 >::AddActor( pRenderer );
        }
    }
    
    void default_AddActor( ::vtkSmartPointer< vtkRenderer > pRenderer ) {
        CellPopulationPyChasteActorGenerator< 2 >::AddActor( pRenderer );
    }

};

void register_CellPopulationPyChasteActorGenerator2_class(){

    { //::CellPopulationPyChasteActorGenerator< 2 >
        typedef bp::class_< CellPopulationPyChasteActorGenerator_less__2__greater__wrapper, bp::bases< AbstractPyChasteActorGenerator< 2 > > > CellPopulationPyChasteActorGenerator2_exposer_t;
        CellPopulationPyChasteActorGenerator2_exposer_t CellPopulationPyChasteActorGenerator2_exposer = CellPopulationPyChasteActorGenerator2_exposer_t( "CellPopulationPyChasteActorGenerator2", bp::init< >() );
        bp::scope CellPopulationPyChasteActorGenerator2_scope( CellPopulationPyChasteActorGenerator2_exposer );
        { //::CellPopulationPyChasteActorGenerator< 2 >::AddActor
        
            typedef CellPopulationPyChasteActorGenerator< 2 > exported_class_t;
            typedef void ( exported_class_t::*AddActor_function_type)( ::vtkSmartPointer< vtkRenderer > ) ;
            typedef void ( CellPopulationPyChasteActorGenerator_less__2__greater__wrapper::*default_AddActor_function_type)( ::vtkSmartPointer< vtkRenderer > ) ;
            
            CellPopulationPyChasteActorGenerator2_exposer.def( 
                "AddActor"
                , AddActor_function_type(&::CellPopulationPyChasteActorGenerator< 2 >::AddActor)
                , default_AddActor_function_type(&CellPopulationPyChasteActorGenerator_less__2__greater__wrapper::default_AddActor)
                , ( bp::arg("pRenderer") ) );
        
        }
        { //::CellPopulationPyChasteActorGenerator< 2 >::AddCaBasedCellPopulationActor
        
            typedef CellPopulationPyChasteActorGenerator< 2 > exported_class_t;
            typedef void ( exported_class_t::*AddCaBasedCellPopulationActor_function_type)( ::vtkSmartPointer< vtkRenderer > ) ;
            
            CellPopulationPyChasteActorGenerator2_exposer.def( 
                "AddCaBasedCellPopulationActor"
                , AddCaBasedCellPopulationActor_function_type( &::CellPopulationPyChasteActorGenerator< 2 >::AddCaBasedCellPopulationActor )
                , ( bp::arg("pRenderer") ) );
        
        }
        { //::CellPopulationPyChasteActorGenerator< 2 >::AddMeshBasedCellPopulationActor
        
            typedef CellPopulationPyChasteActorGenerator< 2 > exported_class_t;
            typedef void ( exported_class_t::*AddMeshBasedCellPopulationActor_function_type)( ::vtkSmartPointer< vtkRenderer > ) ;
            
            CellPopulationPyChasteActorGenerator2_exposer.def( 
                "AddMeshBasedCellPopulationActor"
                , AddMeshBasedCellPopulationActor_function_type( &::CellPopulationPyChasteActorGenerator< 2 >::AddMeshBasedCellPopulationActor )
                , ( bp::arg("pRenderer") ) );
        
        }
        { //::CellPopulationPyChasteActorGenerator< 2 >::AddPottsBasedCellPopulationActor
        
            typedef CellPopulationPyChasteActorGenerator< 2 > exported_class_t;
            typedef void ( exported_class_t::*AddPottsBasedCellPopulationActor_function_type)( ::vtkSmartPointer< vtkRenderer > ) ;
            
            CellPopulationPyChasteActorGenerator2_exposer.def( 
                "AddPottsBasedCellPopulationActor"
                , AddPottsBasedCellPopulationActor_function_type( &::CellPopulationPyChasteActorGenerator< 2 >::AddPottsBasedCellPopulationActor )
                , ( bp::arg("pRenderer") ) );
        
        }
        { //::CellPopulationPyChasteActorGenerator< 2 >::AddVertexBasedCellPopulationActor
        
            typedef CellPopulationPyChasteActorGenerator< 2 > exported_class_t;
            typedef void ( exported_class_t::*AddVertexBasedCellPopulationActor_function_type)( ::vtkSmartPointer< vtkRenderer > ) ;
            
            CellPopulationPyChasteActorGenerator2_exposer.def( 
                "AddVertexBasedCellPopulationActor"
                , AddVertexBasedCellPopulationActor_function_type( &::CellPopulationPyChasteActorGenerator< 2 >::AddVertexBasedCellPopulationActor )
                , ( bp::arg("pRenderer") ) );
        
        }
        { //::CellPopulationPyChasteActorGenerator< 2 >::SetCellPopulation
        
            typedef CellPopulationPyChasteActorGenerator< 2 > exported_class_t;
            typedef void ( exported_class_t::*SetCellPopulation_function_type)( ::boost::shared_ptr< AbstractCellPopulation< 2, 2 > > ) ;
            
            CellPopulationPyChasteActorGenerator2_exposer.def( 
                "SetCellPopulation"
                , SetCellPopulation_function_type( &::CellPopulationPyChasteActorGenerator< 2 >::SetCellPopulation )
                , ( bp::arg("pCellPopulation") ) );
        
        }
        { //::CellPopulationPyChasteActorGenerator< 2 >::SetColorByCellData
        
            typedef CellPopulationPyChasteActorGenerator< 2 > exported_class_t;
            typedef void ( exported_class_t::*SetColorByCellData_function_type)( bool ) ;
            
            CellPopulationPyChasteActorGenerator2_exposer.def( 
                "SetColorByCellData"
                , SetColorByCellData_function_type( &::CellPopulationPyChasteActorGenerator< 2 >::SetColorByCellData )
                , ( bp::arg("colorByCellData") ) );
        
        }
        { //::CellPopulationPyChasteActorGenerator< 2 >::SetColorByCellLabel
        
            typedef CellPopulationPyChasteActorGenerator< 2 > exported_class_t;
            typedef void ( exported_class_t::*SetColorByCellLabel_function_type)( bool ) ;
            
            CellPopulationPyChasteActorGenerator2_exposer.def( 
                "SetColorByCellLabel"
                , SetColorByCellLabel_function_type( &::CellPopulationPyChasteActorGenerator< 2 >::SetColorByCellLabel )
                , ( bp::arg("colorByCellLabel") ) );
        
        }
        { //::CellPopulationPyChasteActorGenerator< 2 >::SetColorByCellMutationState
        
            typedef CellPopulationPyChasteActorGenerator< 2 > exported_class_t;
            typedef void ( exported_class_t::*SetColorByCellMutationState_function_type)( bool ) ;
            
            CellPopulationPyChasteActorGenerator2_exposer.def( 
                "SetColorByCellMutationState"
                , SetColorByCellMutationState_function_type( &::CellPopulationPyChasteActorGenerator< 2 >::SetColorByCellMutationState )
                , ( bp::arg("colorByCellMutationState") ) );
        
        }
        { //::CellPopulationPyChasteActorGenerator< 2 >::SetColorByCellType
        
            typedef CellPopulationPyChasteActorGenerator< 2 > exported_class_t;
            typedef void ( exported_class_t::*SetColorByCellType_function_type)( bool ) ;
            
            CellPopulationPyChasteActorGenerator2_exposer.def( 
                "SetColorByCellType"
                , SetColorByCellType_function_type( &::CellPopulationPyChasteActorGenerator< 2 >::SetColorByCellType )
                , ( bp::arg("colorByCellType") ) );
        
        }
        { //::CellPopulationPyChasteActorGenerator< 2 >::SetColorByUserDefined
        
            typedef CellPopulationPyChasteActorGenerator< 2 > exported_class_t;
            typedef void ( exported_class_t::*SetColorByUserDefined_function_type)( bool ) ;
            
            CellPopulationPyChasteActorGenerator2_exposer.def( 
                "SetColorByUserDefined"
                , SetColorByUserDefined_function_type( &::CellPopulationPyChasteActorGenerator< 2 >::SetColorByUserDefined )
                , ( bp::arg("colorByCellUserDefined") ) );
        
        }
        { //::CellPopulationPyChasteActorGenerator< 2 >::SetShowCellCentres
        
            typedef CellPopulationPyChasteActorGenerator< 2 > exported_class_t;
            typedef void ( exported_class_t::*SetShowCellCentres_function_type)( bool ) ;
            
            CellPopulationPyChasteActorGenerator2_exposer.def( 
                "SetShowCellCentres"
                , SetShowCellCentres_function_type( &::CellPopulationPyChasteActorGenerator< 2 >::SetShowCellCentres )
                , ( bp::arg("showCentres") ) );
        
        }
        { //::CellPopulationPyChasteActorGenerator< 2 >::SetShowMutableMeshEdges
        
            typedef CellPopulationPyChasteActorGenerator< 2 > exported_class_t;
            typedef void ( exported_class_t::*SetShowMutableMeshEdges_function_type)( bool ) ;
            
            CellPopulationPyChasteActorGenerator2_exposer.def( 
                "SetShowMutableMeshEdges"
                , SetShowMutableMeshEdges_function_type( &::CellPopulationPyChasteActorGenerator< 2 >::SetShowMutableMeshEdges )
                , ( bp::arg("showEdges") ) );
        
        }
        { //::CellPopulationPyChasteActorGenerator< 2 >::SetShowPottsMeshEdges
        
            typedef CellPopulationPyChasteActorGenerator< 2 > exported_class_t;
            typedef void ( exported_class_t::*SetShowPottsMeshEdges_function_type)( bool ) ;
            
            CellPopulationPyChasteActorGenerator2_exposer.def( 
                "SetShowPottsMeshEdges"
                , SetShowPottsMeshEdges_function_type( &::CellPopulationPyChasteActorGenerator< 2 >::SetShowPottsMeshEdges )
                , ( bp::arg("showEdges") ) );
        
        }
        { //::CellPopulationPyChasteActorGenerator< 2 >::SetShowPottsMeshOutlines
        
            typedef CellPopulationPyChasteActorGenerator< 2 > exported_class_t;
            typedef void ( exported_class_t::*SetShowPottsMeshOutlines_function_type)( bool ) ;
            
            CellPopulationPyChasteActorGenerator2_exposer.def( 
                "SetShowPottsMeshOutlines"
                , SetShowPottsMeshOutlines_function_type( &::CellPopulationPyChasteActorGenerator< 2 >::SetShowPottsMeshOutlines )
                , ( bp::arg("showOutlines") ) );
        
        }
        { //::CellPopulationPyChasteActorGenerator< 2 >::SetShowVoronoiMeshEdges
        
            typedef CellPopulationPyChasteActorGenerator< 2 > exported_class_t;
            typedef void ( exported_class_t::*SetShowVoronoiMeshEdges_function_type)( bool ) ;
            
            CellPopulationPyChasteActorGenerator2_exposer.def( 
                "SetShowVoronoiMeshEdges"
                , SetShowVoronoiMeshEdges_function_type( &::CellPopulationPyChasteActorGenerator< 2 >::SetShowVoronoiMeshEdges )
                , ( bp::arg("showEdges") ) );
        
        }
        bp::register_ptr_to_python< boost::shared_ptr< CellPopulationPyChasteActorGenerator<2> > >();
        bp::implicitly_convertible< boost::shared_ptr< CellPopulationPyChasteActorGenerator< 2 > >, boost::shared_ptr< AbstractPyChasteActorGenerator< 2 > > >();
    }

}