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
#include "classes_to_be_wrapped.hpp"
#include "CellLabelWriter2_2.pypp.hpp"

namespace bp = boost::python;

struct CellLabelWriter_less__2_comma__2__greater__wrapper : CellLabelWriter< 2, 2 >, bp::wrapper< CellLabelWriter< 2, 2 > > {

    CellLabelWriter_less__2_comma__2__greater__wrapper( )
    : CellLabelWriter<2, 2>( )
      , bp::wrapper< CellLabelWriter< 2, 2 > >(){
        // null constructor
    
    }

    virtual double GetCellDataForVtkOutput( ::CellPtr pCell, ::AbstractCellPopulation< 2, 2 > * pCellPopulation ) {
        if( bp::override func_GetCellDataForVtkOutput = this->get_override( "GetCellDataForVtkOutput" ) )
            return func_GetCellDataForVtkOutput( pCell, boost::python::ptr(pCellPopulation) );
        else{
            return this->CellLabelWriter< 2, 2 >::GetCellDataForVtkOutput( pCell, boost::python::ptr(pCellPopulation) );
        }
    }
    
    double default_GetCellDataForVtkOutput( ::CellPtr pCell, ::AbstractCellPopulation< 2, 2 > * pCellPopulation ) {
        return CellLabelWriter< 2, 2 >::GetCellDataForVtkOutput( pCell, boost::python::ptr(pCellPopulation) );
    }

    virtual void VisitCell( ::CellPtr pCell, ::AbstractCellPopulation< 2, 2 > * pCellPopulation ) {
        if( bp::override func_VisitCell = this->get_override( "VisitCell" ) )
            func_VisitCell( pCell, boost::python::ptr(pCellPopulation) );
        else{
            this->CellLabelWriter< 2, 2 >::VisitCell( pCell, boost::python::ptr(pCellPopulation) );
        }
    }
    
    void default_VisitCell( ::CellPtr pCell, ::AbstractCellPopulation< 2, 2 > * pCellPopulation ) {
        CellLabelWriter< 2, 2 >::VisitCell( pCell, boost::python::ptr(pCellPopulation) );
    }

};

void register_CellLabelWriter2_2_class(){

    bp::class_< CellLabelWriter_less__2_comma__2__greater__wrapper, boost::noncopyable >( "CellLabelWriter2_2", bp::init< >() )    
        .def( 
            "GetCellDataForVtkOutput"
            , (double ( ::CellLabelWriter<2, 2>::* )( ::CellPtr,::AbstractCellPopulation< 2, 2 > * ))(&::CellLabelWriter< 2, 2 >::GetCellDataForVtkOutput)
            , (double ( CellLabelWriter_less__2_comma__2__greater__wrapper::* )( ::CellPtr,::AbstractCellPopulation< 2, 2 > * ))(&CellLabelWriter_less__2_comma__2__greater__wrapper::default_GetCellDataForVtkOutput)
            , ( bp::arg("pCell"), bp::arg("pCellPopulation") ) )    
        .def( 
            "VisitCell"
            , (void ( ::CellLabelWriter<2, 2>::* )( ::CellPtr,::AbstractCellPopulation< 2, 2 > * ))(&::CellLabelWriter< 2, 2 >::VisitCell)
            , (void ( CellLabelWriter_less__2_comma__2__greater__wrapper::* )( ::CellPtr,::AbstractCellPopulation< 2, 2 > * ))(&CellLabelWriter_less__2_comma__2__greater__wrapper::default_VisitCell)
            , ( bp::arg("pCell"), bp::arg("pCellPopulation") ) );

}