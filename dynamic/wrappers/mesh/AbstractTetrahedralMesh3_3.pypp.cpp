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
#include "mesh_headers.hpp"
#include "AbstractTetrahedralMesh3_3.pypp.hpp"

namespace bp = boost::python;

struct AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper : AbstractTetrahedralMesh< 3, 3 >, bp::wrapper< AbstractTetrahedralMesh< 3, 3 > > {

    AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper( )
    : AbstractTetrahedralMesh<3, 3>( )
      , bp::wrapper< AbstractTetrahedralMesh< 3, 3 > >(){
        // null constructor
    
    }

    virtual bool CalculateDesignatedOwnershipOfBoundaryElement( unsigned int faceIndex ) {
        if( bp::override func_CalculateDesignatedOwnershipOfBoundaryElement = this->get_override( "CalculateDesignatedOwnershipOfBoundaryElement" ) )
            return func_CalculateDesignatedOwnershipOfBoundaryElement( faceIndex );
        else{
            return this->AbstractTetrahedralMesh< 3, 3 >::CalculateDesignatedOwnershipOfBoundaryElement( faceIndex );
        }
    }
    
    bool default_CalculateDesignatedOwnershipOfBoundaryElement( unsigned int faceIndex ) {
        return AbstractTetrahedralMesh< 3, 3 >::CalculateDesignatedOwnershipOfBoundaryElement( faceIndex );
    }

    virtual bool CalculateDesignatedOwnershipOfElement( unsigned int elementIndex ) {
        if( bp::override func_CalculateDesignatedOwnershipOfElement = this->get_override( "CalculateDesignatedOwnershipOfElement" ) )
            return func_CalculateDesignatedOwnershipOfElement( elementIndex );
        else{
            return this->AbstractTetrahedralMesh< 3, 3 >::CalculateDesignatedOwnershipOfElement( elementIndex );
        }
    }
    
    bool default_CalculateDesignatedOwnershipOfElement( unsigned int elementIndex ) {
        return AbstractTetrahedralMesh< 3, 3 >::CalculateDesignatedOwnershipOfElement( elementIndex );
    }

    virtual ::boost::numeric::ublas::c_vector< double, 2 > CalculateMinMaxEdgeLengths(  ) {
        if( bp::override func_CalculateMinMaxEdgeLengths = this->get_override( "CalculateMinMaxEdgeLengths" ) )
            return func_CalculateMinMaxEdgeLengths(  );
        else{
            return this->AbstractTetrahedralMesh< 3, 3 >::CalculateMinMaxEdgeLengths(  );
        }
    }
    
    ::boost::numeric::ublas::c_vector< double, 2 > default_CalculateMinMaxEdgeLengths(  ) {
        return AbstractTetrahedralMesh< 3, 3 >::CalculateMinMaxEdgeLengths( );
    }

    virtual void ConstructCuboid( unsigned int width, unsigned int height, unsigned int depth ) {
        if( bp::override func_ConstructCuboid = this->get_override( "ConstructCuboid" ) )
            func_ConstructCuboid( width, height, depth );
        else{
            this->AbstractTetrahedralMesh< 3, 3 >::ConstructCuboid( width, height, depth );
        }
    }
    
    void default_ConstructCuboid( unsigned int width, unsigned int height, unsigned int depth ) {
        AbstractTetrahedralMesh< 3, 3 >::ConstructCuboid( width, height, depth );
    }

    virtual void ConstructFromMeshReader( ::AbstractMeshReader< 3, 3 > & rMeshReader ){
        bp::override func_ConstructFromMeshReader = this->get_override( "ConstructFromMeshReader" );
        func_ConstructFromMeshReader( boost::ref(rMeshReader) );
    }

    virtual void ConstructLinearMesh( unsigned int width ) {
        if( bp::override func_ConstructLinearMesh = this->get_override( "ConstructLinearMesh" ) )
            func_ConstructLinearMesh( width );
        else{
            this->AbstractTetrahedralMesh< 3, 3 >::ConstructLinearMesh( width );
        }
    }
    
    void default_ConstructLinearMesh( unsigned int width ) {
        AbstractTetrahedralMesh< 3, 3 >::ConstructLinearMesh( width );
    }

    virtual void ConstructRectangularMesh( unsigned int width, unsigned int height, bool stagger=true ) {
        if( bp::override func_ConstructRectangularMesh = this->get_override( "ConstructRectangularMesh" ) )
            func_ConstructRectangularMesh( width, height, stagger );
        else{
            this->AbstractTetrahedralMesh< 3, 3 >::ConstructRectangularMesh( width, height, stagger );
        }
    }
    
    void default_ConstructRectangularMesh( unsigned int width, unsigned int height, bool stagger=true ) {
        AbstractTetrahedralMesh< 3, 3 >::ConstructRectangularMesh( width, height, stagger );
    }

    virtual void GetHaloNodeIndices( ::std::vector< unsigned int > & rHaloIndices ) const  {
        if( bp::override func_GetHaloNodeIndices = this->get_override( "GetHaloNodeIndices" ) )
            func_GetHaloNodeIndices( boost::ref(rHaloIndices) );
        else{
            this->AbstractTetrahedralMesh< 3, 3 >::GetHaloNodeIndices( boost::ref(rHaloIndices) );
        }
    }
    
    void default_GetHaloNodeIndices( ::std::vector< unsigned int > & rHaloIndices ) const  {
        AbstractTetrahedralMesh< 3, 3 >::GetHaloNodeIndices( boost::ref(rHaloIndices) );
    }

    virtual void GetInverseJacobianForElement( unsigned int elementIndex, ::boost::numeric::ublas::c_matrix< double, 3, 3 > & rJacobian, double & rJacobianDeterminant, ::boost::numeric::ublas::c_matrix< double, 3, 3 > & rInverseJacobian ) const  {
        if( bp::override func_GetInverseJacobianForElement = this->get_override( "GetInverseJacobianForElement" ) )
            func_GetInverseJacobianForElement( elementIndex, boost::ref(rJacobian), rJacobianDeterminant, boost::ref(rInverseJacobian) );
        else{
            this->AbstractTetrahedralMesh< 3, 3 >::GetInverseJacobianForElement( elementIndex, boost::ref(rJacobian), rJacobianDeterminant, boost::ref(rInverseJacobian) );
        }
    }
    
    void default_GetInverseJacobianForElement( unsigned int elementIndex, ::boost::numeric::ublas::c_matrix< double, 3, 3 > & rJacobian, double & rJacobianDeterminant, ::boost::numeric::ublas::c_matrix< double, 3, 3 > & rInverseJacobian ) const  {
        AbstractTetrahedralMesh< 3, 3 >::GetInverseJacobianForElement( elementIndex, boost::ref(rJacobian), rJacobianDeterminant, boost::ref(rInverseJacobian) );
    }

    virtual unsigned int GetMaximumNodeIndex(  ) {
        if( bp::override func_GetMaximumNodeIndex = this->get_override( "GetMaximumNodeIndex" ) )
            return func_GetMaximumNodeIndex(  );
        else{
            return this->AbstractTetrahedralMesh< 3, 3 >::GetMaximumNodeIndex(  );
        }
    }
    
    unsigned int default_GetMaximumNodeIndex(  ) {
        return AbstractTetrahedralMesh< 3, 3 >::GetMaximumNodeIndex( );
    }

    virtual unsigned int GetNumBoundaryElements(  ) const  {
        if( bp::override func_GetNumBoundaryElements = this->get_override( "GetNumBoundaryElements" ) )
            return func_GetNumBoundaryElements(  );
        else{
            return this->AbstractTetrahedralMesh< 3, 3 >::GetNumBoundaryElements(  );
        }
    }
    
    unsigned int default_GetNumBoundaryElements(  ) const  {
        return AbstractTetrahedralMesh< 3, 3 >::GetNumBoundaryElements( );
    }

    virtual unsigned int GetNumCableElements(  ) const  {
        if( bp::override func_GetNumCableElements = this->get_override( "GetNumCableElements" ) )
            return func_GetNumCableElements(  );
        else{
            return this->AbstractTetrahedralMesh< 3, 3 >::GetNumCableElements(  );
        }
    }
    
    unsigned int default_GetNumCableElements(  ) const  {
        return AbstractTetrahedralMesh< 3, 3 >::GetNumCableElements( );
    }

    virtual unsigned int GetNumElements(  ) const  {
        if( bp::override func_GetNumElements = this->get_override( "GetNumElements" ) )
            return func_GetNumElements(  );
        else{
            return this->AbstractTetrahedralMesh< 3, 3 >::GetNumElements(  );
        }
    }
    
    unsigned int default_GetNumElements(  ) const  {
        return AbstractTetrahedralMesh< 3, 3 >::GetNumElements( );
    }

    virtual unsigned int GetNumLocalBoundaryElements(  ) const  {
        if( bp::override func_GetNumLocalBoundaryElements = this->get_override( "GetNumLocalBoundaryElements" ) )
            return func_GetNumLocalBoundaryElements(  );
        else{
            return this->AbstractTetrahedralMesh< 3, 3 >::GetNumLocalBoundaryElements(  );
        }
    }
    
    unsigned int default_GetNumLocalBoundaryElements(  ) const  {
        return AbstractTetrahedralMesh< 3, 3 >::GetNumLocalBoundaryElements( );
    }

    virtual unsigned int GetNumLocalElements(  ) const  {
        if( bp::override func_GetNumLocalElements = this->get_override( "GetNumLocalElements" ) )
            return func_GetNumLocalElements(  );
        else{
            return this->AbstractTetrahedralMesh< 3, 3 >::GetNumLocalElements(  );
        }
    }
    
    unsigned int default_GetNumLocalElements(  ) const  {
        return AbstractTetrahedralMesh< 3, 3 >::GetNumLocalElements( );
    }

    virtual unsigned int GetNumVertices(  ) const  {
        if( bp::override func_GetNumVertices = this->get_override( "GetNumVertices" ) )
            return func_GetNumVertices(  );
        else{
            return this->AbstractTetrahedralMesh< 3, 3 >::GetNumVertices(  );
        }
    }
    
    unsigned int default_GetNumVertices(  ) const  {
        return AbstractTetrahedralMesh< 3, 3 >::GetNumVertices( );
    }

    virtual void GetWeightedDirectionForBoundaryElement( unsigned int elementIndex, ::boost::numeric::ublas::c_vector< double, 3 > & rWeightedDirection, double & rJacobianDeterminant ) const  {
        if( bp::override func_GetWeightedDirectionForBoundaryElement = this->get_override( "GetWeightedDirectionForBoundaryElement" ) )
            func_GetWeightedDirectionForBoundaryElement( elementIndex, boost::ref(rWeightedDirection), rJacobianDeterminant );
        else{
            this->AbstractTetrahedralMesh< 3, 3 >::GetWeightedDirectionForBoundaryElement( elementIndex, boost::ref(rWeightedDirection), rJacobianDeterminant );
        }
    }
    
    void default_GetWeightedDirectionForBoundaryElement( unsigned int elementIndex, ::boost::numeric::ublas::c_vector< double, 3 > & rWeightedDirection, double & rJacobianDeterminant ) const  {
        AbstractTetrahedralMesh< 3, 3 >::GetWeightedDirectionForBoundaryElement( elementIndex, boost::ref(rWeightedDirection), rJacobianDeterminant );
    }

    virtual void SetElementOwnerships(  ){
        if( bp::override func_SetElementOwnerships = this->get_override( "SetElementOwnerships" ) )
            func_SetElementOwnerships(  );
        else{
            this->AbstractTetrahedralMesh< 3, 3 >::SetElementOwnerships(  );
        }
    }
    
    virtual void default_SetElementOwnerships(  ){
        AbstractTetrahedralMesh< 3, 3 >::SetElementOwnerships( );
    }

    virtual unsigned int SolveBoundaryElementMapping( unsigned int index ) const {
        bp::override func_SolveBoundaryElementMapping = this->get_override( "SolveBoundaryElementMapping" );
        return func_SolveBoundaryElementMapping( index );
    }

    virtual unsigned int SolveElementMapping( unsigned int index ) const {
        bp::override func_SolveElementMapping = this->get_override( "SolveElementMapping" );
        return func_SolveElementMapping( index );
    }

    ::ChasteCuboid< 3 > CalculateBoundingBox( ::std::vector< Node<3> * > const & rNodes ) const {
        return AbstractMesh< 3, 3 >::CalculateBoundingBox( boost::ref(rNodes) );
    }

    virtual ::ChasteCuboid< 3 > CalculateBoundingBox(  ) const  {
        if( bp::override func_CalculateBoundingBox = this->get_override( "CalculateBoundingBox" ) )
            return func_CalculateBoundingBox(  );
        else{
            return this->AbstractMesh< 3, 3 >::CalculateBoundingBox(  );
        }
    }
    
    ::ChasteCuboid< 3 > default_CalculateBoundingBox(  ) const  {
        return AbstractMesh< 3, 3 >::CalculateBoundingBox( );
    }

    virtual unsigned int GetNearestNodeIndex( ::ChastePoint< 3 > const & rTestPoint ) {
        if( bp::override func_GetNearestNodeIndex = this->get_override( "GetNearestNodeIndex" ) )
            return func_GetNearestNodeIndex( boost::ref(rTestPoint) );
        else{
            return this->AbstractMesh< 3, 3 >::GetNearestNodeIndex( boost::ref(rTestPoint) );
        }
    }
    
    unsigned int default_GetNearestNodeIndex( ::ChastePoint< 3 > const & rTestPoint ) {
        return AbstractMesh< 3, 3 >::GetNearestNodeIndex( boost::ref(rTestPoint) );
    }

    virtual unsigned int GetNumAllNodes(  ) const  {
        if( bp::override func_GetNumAllNodes = this->get_override( "GetNumAllNodes" ) )
            return func_GetNumAllNodes(  );
        else{
            return this->AbstractMesh< 3, 3 >::GetNumAllNodes(  );
        }
    }
    
    unsigned int default_GetNumAllNodes(  ) const  {
        return AbstractMesh< 3, 3 >::GetNumAllNodes( );
    }

    virtual unsigned int GetNumNodes(  ) const  {
        if( bp::override func_GetNumNodes = this->get_override( "GetNumNodes" ) )
            return func_GetNumNodes(  );
        else{
            return this->AbstractMesh< 3, 3 >::GetNumNodes(  );
        }
    }
    
    unsigned int default_GetNumNodes(  ) const  {
        return AbstractMesh< 3, 3 >::GetNumNodes( );
    }

    virtual ::boost::numeric::ublas::c_vector< double, 3 > GetVectorFromAtoB( ::boost::numeric::ublas::c_vector< double, 3 > const & rLocationA, ::boost::numeric::ublas::c_vector< double, 3 > const & rLocationB ) {
        if( bp::override func_GetVectorFromAtoB = this->get_override( "GetVectorFromAtoB" ) )
            return func_GetVectorFromAtoB( boost::ref(rLocationA), boost::ref(rLocationB) );
        else{
            return this->AbstractMesh< 3, 3 >::GetVectorFromAtoB( boost::ref(rLocationA), boost::ref(rLocationB) );
        }
    }
    
    ::boost::numeric::ublas::c_vector< double, 3 > default_GetVectorFromAtoB( ::boost::numeric::ublas::c_vector< double, 3 > const & rLocationA, ::boost::numeric::ublas::c_vector< double, 3 > const & rLocationB ) {
        return AbstractMesh< 3, 3 >::GetVectorFromAtoB( boost::ref(rLocationA), boost::ref(rLocationB) );
    }

    virtual double GetWidth( unsigned int const & rDimension ) const  {
        if( bp::override func_GetWidth = this->get_override( "GetWidth" ) )
            return func_GetWidth( rDimension );
        else{
            return this->AbstractMesh< 3, 3 >::GetWidth( rDimension );
        }
    }
    
    double default_GetWidth( unsigned int const & rDimension ) const  {
        return AbstractMesh< 3, 3 >::GetWidth( rDimension );
    }

    virtual void PermuteNodes(  ) {
        if( bp::override func_PermuteNodes = this->get_override( "PermuteNodes" ) )
            func_PermuteNodes(  );
        else{
            this->AbstractMesh< 3, 3 >::PermuteNodes(  );
        }
    }
    
    void default_PermuteNodes(  ) {
        AbstractMesh< 3, 3 >::PermuteNodes( );
    }

    virtual void ReadNodesPerProcessorFile( ::std::string const & rNodesPerProcessorFile ) {
        if( bp::override func_ReadNodesPerProcessorFile = this->get_override( "ReadNodesPerProcessorFile" ) )
            func_ReadNodesPerProcessorFile( rNodesPerProcessorFile );
        else{
            this->AbstractMesh< 3, 3 >::ReadNodesPerProcessorFile( rNodesPerProcessorFile );
        }
    }
    
    void default_ReadNodesPerProcessorFile( ::std::string const & rNodesPerProcessorFile ) {
        AbstractMesh< 3, 3 >::ReadNodesPerProcessorFile( rNodesPerProcessorFile );
    }

    virtual void RefreshMesh(  ) {
        if( bp::override func_RefreshMesh = this->get_override( "RefreshMesh" ) )
            func_RefreshMesh(  );
        else{
            this->AbstractMesh< 3, 3 >::RefreshMesh(  );
        }
    }
    
    void default_RefreshMesh(  ) {
        AbstractMesh< 3, 3 >::RefreshMesh( );
    }

    virtual void Rotate( ::boost::numeric::ublas::c_matrix< double, 3, 3 > rotationMatrix ) {
        if( bp::override func_Rotate = this->get_override( "Rotate" ) )
            func_Rotate( rotationMatrix );
        else{
            this->AbstractMesh< 3, 3 >::Rotate( rotationMatrix );
        }
    }
    
    void default_Rotate( ::boost::numeric::ublas::c_matrix< double, 3, 3 > rotationMatrix ) {
        AbstractMesh< 3, 3 >::Rotate( rotationMatrix );
    }

    virtual void Scale( double const xFactor=1., double const yFactor=1., double const zFactor=1. ) {
        if( bp::override func_Scale = this->get_override( "Scale" ) )
            func_Scale( xFactor, yFactor, zFactor );
        else{
            this->AbstractMesh< 3, 3 >::Scale( xFactor, yFactor, zFactor );
        }
    }
    
    void default_Scale( double const xFactor=1., double const yFactor=1., double const zFactor=1. ) {
        AbstractMesh< 3, 3 >::Scale( xFactor, yFactor, zFactor );
    }

    virtual void SetDistributedVectorFactory( ::DistributedVectorFactory * pFactory ) {
        if( bp::override func_SetDistributedVectorFactory = this->get_override( "SetDistributedVectorFactory" ) )
            func_SetDistributedVectorFactory( boost::python::ptr(pFactory) );
        else{
            this->AbstractMesh< 3, 3 >::SetDistributedVectorFactory( boost::python::ptr(pFactory) );
        }
    }
    
    void default_SetDistributedVectorFactory( ::DistributedVectorFactory * pFactory ) {
        AbstractMesh< 3, 3 >::SetDistributedVectorFactory( boost::python::ptr(pFactory) );
    }

    virtual unsigned int SolveNodeMapping( unsigned int index ) const {
        bp::override func_SolveNodeMapping = this->get_override( "SolveNodeMapping" );
        return func_SolveNodeMapping( index );
    }

    virtual void Translate( ::boost::numeric::ublas::c_vector< double, 3 > const & rDisplacement ) {
        if( bp::override func_Translate = this->get_override( "Translate" ) )
            func_Translate( boost::ref(rDisplacement) );
        else{
            this->AbstractMesh< 3, 3 >::Translate( boost::ref(rDisplacement) );
        }
    }
    
    void default_Translate( ::boost::numeric::ublas::c_vector< double, 3 > const & rDisplacement ) {
        AbstractMesh< 3, 3 >::Translate( boost::ref(rDisplacement) );
    }

};

void register_AbstractTetrahedralMesh3_3_class(){

    bp::class_< AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper, bp::bases< AbstractMesh< 3, 3 > >, boost::noncopyable >( "AbstractTetrahedralMesh3_3", bp::init< >() )    
        .def( 
            "CalculateDesignatedOwnershipOfBoundaryElement"
            , (bool ( ::AbstractTetrahedralMesh<3, 3>::* )( unsigned int ))(&::AbstractTetrahedralMesh< 3, 3 >::CalculateDesignatedOwnershipOfBoundaryElement)
            , (bool ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )( unsigned int ))(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_CalculateDesignatedOwnershipOfBoundaryElement)
            , ( bp::arg("faceIndex") ) )    
        .def( 
            "CalculateDesignatedOwnershipOfElement"
            , (bool ( ::AbstractTetrahedralMesh<3, 3>::* )( unsigned int ))(&::AbstractTetrahedralMesh< 3, 3 >::CalculateDesignatedOwnershipOfElement)
            , (bool ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )( unsigned int ))(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_CalculateDesignatedOwnershipOfElement)
            , ( bp::arg("elementIndex") ) )    
        .def( 
            "CalculateMaximumNodeConnectivityPerProcess"
            , (unsigned int ( ::AbstractTetrahedralMesh<3, 3>::* )(  )const)( &::AbstractTetrahedralMesh< 3, 3 >::CalculateMaximumNodeConnectivityPerProcess ) )    
        .def( 
            "CalculateMinMaxEdgeLengths"
            , (::boost::numeric::ublas::c_vector< double, 2 > ( ::AbstractTetrahedralMesh<3, 3>::* )(  ))(&::AbstractTetrahedralMesh< 3, 3 >::CalculateMinMaxEdgeLengths)
            , (::boost::numeric::ublas::c_vector< double, 2 > ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )(  ))(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_CalculateMinMaxEdgeLengths) )    
        .def( 
            "CalculateNodeExchange"
            , (void ( ::AbstractTetrahedralMesh<3, 3>::* )( ::std::vector< std::vector< unsigned int > > &,::std::vector< std::vector< unsigned int > > & ))( &::AbstractTetrahedralMesh< 3, 3 >::CalculateNodeExchange )
            , ( bp::arg("rNodesToSendPerProcess"), bp::arg("rNodesToReceivePerProcess") ) )    
        .def( 
            "CheckOutwardNormals"
            , (void ( ::AbstractTetrahedralMesh<3, 3>::* )(  ))( &::AbstractTetrahedralMesh< 3, 3 >::CheckOutwardNormals ) )    
        .def( 
            "ConstructCuboid"
            , (void ( ::AbstractTetrahedralMesh<3, 3>::* )( unsigned int,unsigned int,unsigned int ))(&::AbstractTetrahedralMesh< 3, 3 >::ConstructCuboid)
            , (void ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )( unsigned int,unsigned int,unsigned int ))(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_ConstructCuboid)
            , ( bp::arg("width"), bp::arg("height"), bp::arg("depth") ) )    
        .def( 
            "ConstructFromMesh"
            , (void ( ::AbstractTetrahedralMesh<3, 3>::* )( ::AbstractTetrahedralMesh< 3, 3 > & ))( &::AbstractTetrahedralMesh< 3, 3 >::ConstructFromMesh )
            , ( bp::arg("rOtherMesh") ) )    
        .def( 
            "ConstructFromMeshReader"
            , bp::pure_virtual( (void ( ::AbstractTetrahedralMesh<3, 3>::* )( ::AbstractMeshReader< 3, 3 > & ))(&::AbstractTetrahedralMesh< 3, 3 >::ConstructFromMeshReader) )
            , ( bp::arg("rMeshReader") ) )    
        .def( 
            "ConstructLinearMesh"
            , (void ( ::AbstractTetrahedralMesh<3, 3>::* )( unsigned int ))(&::AbstractTetrahedralMesh< 3, 3 >::ConstructLinearMesh)
            , (void ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )( unsigned int ))(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_ConstructLinearMesh)
            , ( bp::arg("width") ) )    
        .def( 
            "ConstructRectangularMesh"
            , (void ( ::AbstractTetrahedralMesh<3, 3>::* )( unsigned int,unsigned int,bool ))(&::AbstractTetrahedralMesh< 3, 3 >::ConstructRectangularMesh)
            , (void ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )( unsigned int,unsigned int,bool ))(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_ConstructRectangularMesh)
            , ( bp::arg("width"), bp::arg("height"), bp::arg("stagger")=(bool)(true) ) )    
        .def( 
            "ConstructRegularSlabMesh"
            , (void ( ::AbstractTetrahedralMesh<3, 3>::* )( double,double,double,double ))( &::AbstractTetrahedralMesh< 3, 3 >::ConstructRegularSlabMesh )
            , ( bp::arg("spaceStep"), bp::arg("width"), bp::arg("height")=0, bp::arg("depth")=0 ) )    
        .def( 
            "ConstructRegularSlabMeshWithDimensionSplit"
            , (void ( ::AbstractTetrahedralMesh<3, 3>::* )( unsigned int,double,double,double,double ))( &::AbstractTetrahedralMesh< 3, 3 >::ConstructRegularSlabMeshWithDimensionSplit )
            , ( bp::arg("dimension"), bp::arg("spaceStep"), bp::arg("width"), bp::arg("height")=0, bp::arg("depth")=0 ) )    
        .def( 
            "GetBoundaryElementIteratorBegin"
            , (::AbstractTetrahedralMesh< 3, 3 >::BoundaryElementIterator ( ::AbstractTetrahedralMesh<3, 3>::* )(  )const)( &::AbstractTetrahedralMesh< 3, 3 >::GetBoundaryElementIteratorBegin ) )    
        .def( 
            "GetBoundaryElementIteratorEnd"
            , (::AbstractTetrahedralMesh< 3, 3 >::BoundaryElementIterator ( ::AbstractTetrahedralMesh<3, 3>::* )(  )const)( &::AbstractTetrahedralMesh< 3, 3 >::GetBoundaryElementIteratorEnd ) )    
        .def( 
            "GetContainingElementIndex"
            , (unsigned int ( ::AbstractTetrahedralMesh<3, 3>::* )( ::ChastePoint< 3 > const &,bool,::std::set< unsigned int >,bool ))( &::AbstractTetrahedralMesh< 3, 3 >::GetContainingElementIndex )
            , ( bp::arg("rTestPoint"), bp::arg("strict")=(bool)(false), bp::arg("testElements")=std::set<unsigned int>(), bp::arg("onlyTryWithTestElements")=(bool)(false) ) )    
        .def( 
            "GetElementIteratorBegin"
            , (::AbstractTetrahedralMesh< 3, 3 >::ElementIterator ( ::AbstractTetrahedralMesh<3, 3>::* )( bool ))( &::AbstractTetrahedralMesh< 3, 3 >::GetElementIteratorBegin )
            , ( bp::arg("skipDeletedElements")=(bool)(true) ) )    
        .def( 
            "GetElementIteratorEnd"
            , (::AbstractTetrahedralMesh< 3, 3 >::ElementIterator ( ::AbstractTetrahedralMesh<3, 3>::* )(  ))( &::AbstractTetrahedralMesh< 3, 3 >::GetElementIteratorEnd ) )    
        .def( 
            "GetHaloNodeIndices"
            , (void ( ::AbstractTetrahedralMesh<3, 3>::* )( ::std::vector< unsigned int > & )const)(&::AbstractTetrahedralMesh< 3, 3 >::GetHaloNodeIndices)
            , (void ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )( ::std::vector< unsigned int > & )const)(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_GetHaloNodeIndices)
            , ( bp::arg("rHaloIndices") ) )    
        .def( 
            "GetInverseJacobianForElement"
            , (void ( ::AbstractTetrahedralMesh<3, 3>::* )( unsigned int,::boost::numeric::ublas::c_matrix< double, 3, 3 > &,double &,::boost::numeric::ublas::c_matrix< double, 3, 3 > & )const)(&::AbstractTetrahedralMesh< 3, 3 >::GetInverseJacobianForElement)
            , (void ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )( unsigned int,::boost::numeric::ublas::c_matrix< double, 3, 3 > &,double &,::boost::numeric::ublas::c_matrix< double, 3, 3 > & )const)(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_GetInverseJacobianForElement)
            , ( bp::arg("elementIndex"), bp::arg("rJacobian"), bp::arg("rJacobianDeterminant"), bp::arg("rInverseJacobian") ) )    
        .def( 
            "GetMaximumNodeIndex"
            , (unsigned int ( ::AbstractTetrahedralMesh<3, 3>::* )(  ))(&::AbstractTetrahedralMesh< 3, 3 >::GetMaximumNodeIndex)
            , (unsigned int ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )(  ))(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_GetMaximumNodeIndex) )    
        .def( 
            "GetNearestElementIndexFromTestElements"
            , (unsigned int ( ::AbstractTetrahedralMesh<3, 3>::* )( ::ChastePoint< 3 > const &,::std::set< unsigned int > ))( &::AbstractTetrahedralMesh< 3, 3 >::GetNearestElementIndexFromTestElements )
            , ( bp::arg("rTestPoint"), bp::arg("testElements") ) )    
        .def( 
            "GetNumAllBoundaryElements"
            , (unsigned int ( ::AbstractTetrahedralMesh<3, 3>::* )(  )const)( &::AbstractTetrahedralMesh< 3, 3 >::GetNumAllBoundaryElements ) )    
        .def( 
            "GetNumAllElements"
            , (unsigned int ( ::AbstractTetrahedralMesh<3, 3>::* )(  )const)( &::AbstractTetrahedralMesh< 3, 3 >::GetNumAllElements ) )    
        .def( 
            "GetNumBoundaryElements"
            , (unsigned int ( ::AbstractTetrahedralMesh<3, 3>::* )(  )const)(&::AbstractTetrahedralMesh< 3, 3 >::GetNumBoundaryElements)
            , (unsigned int ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )(  )const)(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_GetNumBoundaryElements) )    
        .def( 
            "GetNumCableElements"
            , (unsigned int ( ::AbstractTetrahedralMesh<3, 3>::* )(  )const)(&::AbstractTetrahedralMesh< 3, 3 >::GetNumCableElements)
            , (unsigned int ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )(  )const)(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_GetNumCableElements) )    
        .def( 
            "GetNumElements"
            , (unsigned int ( ::AbstractTetrahedralMesh<3, 3>::* )(  )const)(&::AbstractTetrahedralMesh< 3, 3 >::GetNumElements)
            , (unsigned int ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )(  )const)(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_GetNumElements) )    
        .def( 
            "GetNumLocalBoundaryElements"
            , (unsigned int ( ::AbstractTetrahedralMesh<3, 3>::* )(  )const)(&::AbstractTetrahedralMesh< 3, 3 >::GetNumLocalBoundaryElements)
            , (unsigned int ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )(  )const)(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_GetNumLocalBoundaryElements) )    
        .def( 
            "GetNumLocalElements"
            , (unsigned int ( ::AbstractTetrahedralMesh<3, 3>::* )(  )const)(&::AbstractTetrahedralMesh< 3, 3 >::GetNumLocalElements)
            , (unsigned int ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )(  )const)(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_GetNumLocalElements) )    
        .def( 
            "GetNumVertices"
            , (unsigned int ( ::AbstractTetrahedralMesh<3, 3>::* )(  )const)(&::AbstractTetrahedralMesh< 3, 3 >::GetNumVertices)
            , (unsigned int ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )(  )const)(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_GetNumVertices) )    
        .def( 
            "GetWeightedDirectionForBoundaryElement"
            , (void ( ::AbstractTetrahedralMesh<3, 3>::* )( unsigned int,::boost::numeric::ublas::c_vector< double, 3 > &,double & )const)(&::AbstractTetrahedralMesh< 3, 3 >::GetWeightedDirectionForBoundaryElement)
            , (void ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )( unsigned int,::boost::numeric::ublas::c_vector< double, 3 > &,double & )const)(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_GetWeightedDirectionForBoundaryElement)
            , ( bp::arg("elementIndex"), bp::arg("rWeightedDirection"), bp::arg("rJacobianDeterminant") ) )    
        .def( 
            "SetElementOwnerships"
            , (void ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )(  ))(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_SetElementOwnerships) )    
        .def( 
            "CalculateBoundingBox"
            , (::ChasteCuboid<3> ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )( ::std::vector<Node<3> *, std::allocator<Node<3> *> > const & )const)(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::CalculateBoundingBox)
            , ( bp::arg("rNodes") ) )    
        .def( 
            "CalculateBoundingBox"
            , (::ChasteCuboid< 3 > ( ::AbstractMesh<3, 3>::* )(  )const)(&::AbstractMesh< 3, 3 >::CalculateBoundingBox)
            , (::ChasteCuboid< 3 > ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )(  )const)(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_CalculateBoundingBox) )    
        .def( 
            "GetNearestNodeIndex"
            , (unsigned int ( ::AbstractMesh<3, 3>::* )( ::ChastePoint< 3 > const & ))(&::AbstractMesh< 3, 3 >::GetNearestNodeIndex)
            , (unsigned int ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )( ::ChastePoint< 3 > const & ))(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_GetNearestNodeIndex)
            , ( bp::arg("rTestPoint") ) )    
        .def( 
            "GetNumAllNodes"
            , (unsigned int ( ::AbstractMesh<3, 3>::* )(  )const)(&::AbstractMesh< 3, 3 >::GetNumAllNodes)
            , (unsigned int ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )(  )const)(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_GetNumAllNodes) )    
        .def( 
            "GetNumNodes"
            , (unsigned int ( ::AbstractMesh<3, 3>::* )(  )const)(&::AbstractMesh< 3, 3 >::GetNumNodes)
            , (unsigned int ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )(  )const)(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_GetNumNodes) )    
        .def( 
            "GetVectorFromAtoB"
            , (::boost::numeric::ublas::c_vector< double, 3 > ( ::AbstractMesh<3, 3>::* )( ::boost::numeric::ublas::c_vector< double, 3 > const &,::boost::numeric::ublas::c_vector< double, 3 > const & ))(&::AbstractMesh< 3, 3 >::GetVectorFromAtoB)
            , (::boost::numeric::ublas::c_vector< double, 3 > ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )( ::boost::numeric::ublas::c_vector< double, 3 > const &,::boost::numeric::ublas::c_vector< double, 3 > const & ))(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_GetVectorFromAtoB)
            , ( bp::arg("rLocationA"), bp::arg("rLocationB") ) )    
        .def( 
            "GetWidth"
            , (double ( ::AbstractMesh<3, 3>::* )( unsigned int const & )const)(&::AbstractMesh< 3, 3 >::GetWidth)
            , (double ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )( unsigned int const & )const)(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_GetWidth)
            , ( bp::arg("rDimension") ) )    
        .def( 
            "PermuteNodes"
            , (void ( ::AbstractMesh<3, 3>::* )(  ))(&::AbstractMesh< 3, 3 >::PermuteNodes)
            , (void ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )(  ))(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_PermuteNodes) )    
        .def( 
            "ReadNodesPerProcessorFile"
            , (void ( ::AbstractMesh<3, 3>::* )( ::std::string const & ))(&::AbstractMesh< 3, 3 >::ReadNodesPerProcessorFile)
            , (void ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )( ::std::string const & ))(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_ReadNodesPerProcessorFile)
            , ( bp::arg("rNodesPerProcessorFile") ) )    
        .def( 
            "RefreshMesh"
            , (void ( ::AbstractMesh<3, 3>::* )(  ))(&::AbstractMesh< 3, 3 >::RefreshMesh)
            , (void ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )(  ))(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_RefreshMesh) )    
        .def( 
            "Rotate"
            , (void ( ::AbstractMesh<3, 3>::* )( ::boost::numeric::ublas::c_matrix< double, 3, 3 > ))(&::AbstractMesh< 3, 3 >::Rotate)
            , (void ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )( ::boost::numeric::ublas::c_matrix< double, 3, 3 > ))(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_Rotate)
            , ( bp::arg("rotationMatrix") ) )    
        .def( 
            "Rotate"
            , (void ( ::AbstractMesh<3, 3>::* )( ::boost::numeric::ublas::c_vector< double, 3 >,double ))( &::AbstractMesh< 3, 3 >::Rotate )
            , ( bp::arg("axis"), bp::arg("angle") ) )    
        .def( 
            "Rotate"
            , (void ( ::AbstractMesh<3, 3>::* )( double ))( &::AbstractMesh< 3, 3 >::Rotate )
            , ( bp::arg("theta") ) )    
        .def( 
            "Scale"
            , (void ( ::AbstractMesh<3, 3>::* )( double const,double const,double const ))(&::AbstractMesh< 3, 3 >::Scale)
            , (void ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )( double const,double const,double const ))(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_Scale)
            , ( bp::arg("xFactor")=1., bp::arg("yFactor")=1., bp::arg("zFactor")=1. ) )    
        .def( 
            "SetDistributedVectorFactory"
            , (void ( ::AbstractMesh<3, 3>::* )( ::DistributedVectorFactory * ))(&::AbstractMesh< 3, 3 >::SetDistributedVectorFactory)
            , (void ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )( ::DistributedVectorFactory * ))(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_SetDistributedVectorFactory)
            , ( bp::arg("pFactory") ) )    
        .def( 
            "Translate"
            , (void ( ::AbstractMesh<3, 3>::* )( ::boost::numeric::ublas::c_vector< double, 3 > const & ))(&::AbstractMesh< 3, 3 >::Translate)
            , (void ( AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::* )( ::boost::numeric::ublas::c_vector< double, 3 > const & ))(&AbstractTetrahedralMesh_less__3_comma__3__greater__wrapper::default_Translate)
            , ( bp::arg("rDisplacement") ) )    
        .def( 
            "Translate"
            , (void ( ::AbstractMesh<3, 3>::* )( double const,double const,double const ))( &::AbstractMesh< 3, 3 >::Translate )
            , ( bp::arg("xMovement")=0., bp::arg("yMovement")=0., bp::arg("zMovement")=0. ) );

}