// This file has been generated by Py++.

#include "boost/python.hpp"
#include "/home/grogan/Chaste/projects/PyChaste/dynamic/wrapper_headers/pde_headers.hpp"
#include "_chaste_project_PyChaste_pde_classes_2.pypp.hpp"

namespace bp = boost::python;

struct AbstractLinearEllipticPde_less__2_comma__2__greater__wrapper : AbstractLinearEllipticPde< 2, 2 >, bp::wrapper< AbstractLinearEllipticPde< 2, 2 > > {

    AbstractLinearEllipticPde_less__2_comma__2__greater__wrapper( )
    : AbstractLinearEllipticPde<2, 2>( )
      , bp::wrapper< AbstractLinearEllipticPde< 2, 2 > >(){
        // null constructor
    
    }

    virtual double ComputeConstantInUSourceTerm( ::ChastePoint< 2 > const & rX, ::Element< 2, 2 > * pElement ){
        bp::override func_ComputeConstantInUSourceTerm = this->get_override( "ComputeConstantInUSourceTerm" );
        return func_ComputeConstantInUSourceTerm( boost::ref(rX), boost::python::ptr(pElement) );
    }

    virtual double ComputeConstantInUSourceTermAtNode( ::Node< 2 > const & rNode ) {
        if( bp::override func_ComputeConstantInUSourceTermAtNode = this->get_override( "ComputeConstantInUSourceTermAtNode" ) )
            return func_ComputeConstantInUSourceTermAtNode( boost::ref(rNode) );
        else{
            return this->AbstractLinearEllipticPde< 2, 2 >::ComputeConstantInUSourceTermAtNode( boost::ref(rNode) );
        }
    }
    
    double default_ComputeConstantInUSourceTermAtNode( ::Node< 2 > const & rNode ) {
        return AbstractLinearEllipticPde< 2, 2 >::ComputeConstantInUSourceTermAtNode( boost::ref(rNode) );
    }

    virtual ::boost::numeric::ublas::c_matrix< double, 2, 2 > ComputeDiffusionTerm( ::ChastePoint< 2 > const & rX ){
        bp::override func_ComputeDiffusionTerm = this->get_override( "ComputeDiffusionTerm" );
        return func_ComputeDiffusionTerm( boost::ref(rX) );
    }

    virtual double ComputeLinearInUCoeffInSourceTerm( ::ChastePoint< 2 > const & rX, ::Element< 2, 2 > * pElement ){
        bp::override func_ComputeLinearInUCoeffInSourceTerm = this->get_override( "ComputeLinearInUCoeffInSourceTerm" );
        return func_ComputeLinearInUCoeffInSourceTerm( boost::ref(rX), boost::python::ptr(pElement) );
    }

    virtual double ComputeLinearInUCoeffInSourceTermAtNode( ::Node< 2 > const & rNode ) {
        if( bp::override func_ComputeLinearInUCoeffInSourceTermAtNode = this->get_override( "ComputeLinearInUCoeffInSourceTermAtNode" ) )
            return func_ComputeLinearInUCoeffInSourceTermAtNode( boost::ref(rNode) );
        else{
            return this->AbstractLinearEllipticPde< 2, 2 >::ComputeLinearInUCoeffInSourceTermAtNode( boost::ref(rNode) );
        }
    }
    
    double default_ComputeLinearInUCoeffInSourceTermAtNode( ::Node< 2 > const & rNode ) {
        return AbstractLinearEllipticPde< 2, 2 >::ComputeLinearInUCoeffInSourceTermAtNode( boost::ref(rNode) );
    }

};

struct AbstractLinearEllipticPde_less__3_comma__3__greater__wrapper : AbstractLinearEllipticPde< 3, 3 >, bp::wrapper< AbstractLinearEllipticPde< 3, 3 > > {

    AbstractLinearEllipticPde_less__3_comma__3__greater__wrapper( )
    : AbstractLinearEllipticPde<3, 3>( )
      , bp::wrapper< AbstractLinearEllipticPde< 3, 3 > >(){
        // null constructor
    
    }

    virtual double ComputeConstantInUSourceTerm( ::ChastePoint< 3 > const & rX, ::Element< 3, 3 > * pElement ){
        bp::override func_ComputeConstantInUSourceTerm = this->get_override( "ComputeConstantInUSourceTerm" );
        return func_ComputeConstantInUSourceTerm( boost::ref(rX), boost::python::ptr(pElement) );
    }

    virtual double ComputeConstantInUSourceTermAtNode( ::Node< 3 > const & rNode ) {
        if( bp::override func_ComputeConstantInUSourceTermAtNode = this->get_override( "ComputeConstantInUSourceTermAtNode" ) )
            return func_ComputeConstantInUSourceTermAtNode( boost::ref(rNode) );
        else{
            return this->AbstractLinearEllipticPde< 3, 3 >::ComputeConstantInUSourceTermAtNode( boost::ref(rNode) );
        }
    }
    
    double default_ComputeConstantInUSourceTermAtNode( ::Node< 3 > const & rNode ) {
        return AbstractLinearEllipticPde< 3, 3 >::ComputeConstantInUSourceTermAtNode( boost::ref(rNode) );
    }

    virtual ::boost::numeric::ublas::c_matrix< double, 3, 3 > ComputeDiffusionTerm( ::ChastePoint< 3 > const & rX ){
        bp::override func_ComputeDiffusionTerm = this->get_override( "ComputeDiffusionTerm" );
        return func_ComputeDiffusionTerm( boost::ref(rX) );
    }

    virtual double ComputeLinearInUCoeffInSourceTerm( ::ChastePoint< 3 > const & rX, ::Element< 3, 3 > * pElement ){
        bp::override func_ComputeLinearInUCoeffInSourceTerm = this->get_override( "ComputeLinearInUCoeffInSourceTerm" );
        return func_ComputeLinearInUCoeffInSourceTerm( boost::ref(rX), boost::python::ptr(pElement) );
    }

    virtual double ComputeLinearInUCoeffInSourceTermAtNode( ::Node< 3 > const & rNode ) {
        if( bp::override func_ComputeLinearInUCoeffInSourceTermAtNode = this->get_override( "ComputeLinearInUCoeffInSourceTermAtNode" ) )
            return func_ComputeLinearInUCoeffInSourceTermAtNode( boost::ref(rNode) );
        else{
            return this->AbstractLinearEllipticPde< 3, 3 >::ComputeLinearInUCoeffInSourceTermAtNode( boost::ref(rNode) );
        }
    }
    
    double default_ComputeLinearInUCoeffInSourceTermAtNode( ::Node< 3 > const & rNode ) {
        return AbstractLinearEllipticPde< 3, 3 >::ComputeLinearInUCoeffInSourceTermAtNode( boost::ref(rNode) );
    }

};

void register_classes_2(){

    bp::class_< AbstractLinearEllipticPde_less__2_comma__2__greater__wrapper, boost::noncopyable >( "AbstractLinearEllipticPde2_2", bp::init< >() )    
        .def( 
            "ComputeConstantInUSourceTerm"
            , bp::pure_virtual( (double ( ::AbstractLinearEllipticPde<2, 2>::* )( ::ChastePoint< 2 > const &,::Element< 2, 2 > * ))(&::AbstractLinearEllipticPde< 2, 2 >::ComputeConstantInUSourceTerm) )
            , ( bp::arg("rX"), bp::arg("pElement") ) )    
        .def( 
            "ComputeConstantInUSourceTermAtNode"
            , (double ( ::AbstractLinearEllipticPde<2, 2>::* )( ::Node< 2 > const & ))(&::AbstractLinearEllipticPde< 2, 2 >::ComputeConstantInUSourceTermAtNode)
            , (double ( AbstractLinearEllipticPde_less__2_comma__2__greater__wrapper::* )( ::Node< 2 > const & ))(&AbstractLinearEllipticPde_less__2_comma__2__greater__wrapper::default_ComputeConstantInUSourceTermAtNode)
            , ( bp::arg("rNode") ) )    
        .def( 
            "ComputeDiffusionTerm"
            , bp::pure_virtual( (::boost::numeric::ublas::c_matrix< double, 2, 2 > ( ::AbstractLinearEllipticPde<2, 2>::* )( ::ChastePoint< 2 > const & ))(&::AbstractLinearEllipticPde< 2, 2 >::ComputeDiffusionTerm) )
            , ( bp::arg("rX") ) )    
        .def( 
            "ComputeLinearInUCoeffInSourceTerm"
            , bp::pure_virtual( (double ( ::AbstractLinearEllipticPde<2, 2>::* )( ::ChastePoint< 2 > const &,::Element< 2, 2 > * ))(&::AbstractLinearEllipticPde< 2, 2 >::ComputeLinearInUCoeffInSourceTerm) )
            , ( bp::arg("rX"), bp::arg("pElement") ) )    
        .def( 
            "ComputeLinearInUCoeffInSourceTermAtNode"
            , (double ( ::AbstractLinearEllipticPde<2, 2>::* )( ::Node< 2 > const & ))(&::AbstractLinearEllipticPde< 2, 2 >::ComputeLinearInUCoeffInSourceTermAtNode)
            , (double ( AbstractLinearEllipticPde_less__2_comma__2__greater__wrapper::* )( ::Node< 2 > const & ))(&AbstractLinearEllipticPde_less__2_comma__2__greater__wrapper::default_ComputeLinearInUCoeffInSourceTermAtNode)
            , ( bp::arg("rNode") ) );

    bp::class_< AbstractLinearEllipticPde_less__3_comma__3__greater__wrapper, boost::noncopyable >( "AbstractLinearEllipticPde3_3", bp::init< >() )    
        .def( 
            "ComputeConstantInUSourceTerm"
            , bp::pure_virtual( (double ( ::AbstractLinearEllipticPde<3, 3>::* )( ::ChastePoint< 3 > const &,::Element< 3, 3 > * ))(&::AbstractLinearEllipticPde< 3, 3 >::ComputeConstantInUSourceTerm) )
            , ( bp::arg("rX"), bp::arg("pElement") ) )    
        .def( 
            "ComputeConstantInUSourceTermAtNode"
            , (double ( ::AbstractLinearEllipticPde<3, 3>::* )( ::Node< 3 > const & ))(&::AbstractLinearEllipticPde< 3, 3 >::ComputeConstantInUSourceTermAtNode)
            , (double ( AbstractLinearEllipticPde_less__3_comma__3__greater__wrapper::* )( ::Node< 3 > const & ))(&AbstractLinearEllipticPde_less__3_comma__3__greater__wrapper::default_ComputeConstantInUSourceTermAtNode)
            , ( bp::arg("rNode") ) )    
        .def( 
            "ComputeDiffusionTerm"
            , bp::pure_virtual( (::boost::numeric::ublas::c_matrix< double, 3, 3 > ( ::AbstractLinearEllipticPde<3, 3>::* )( ::ChastePoint< 3 > const & ))(&::AbstractLinearEllipticPde< 3, 3 >::ComputeDiffusionTerm) )
            , ( bp::arg("rX") ) )    
        .def( 
            "ComputeLinearInUCoeffInSourceTerm"
            , bp::pure_virtual( (double ( ::AbstractLinearEllipticPde<3, 3>::* )( ::ChastePoint< 3 > const &,::Element< 3, 3 > * ))(&::AbstractLinearEllipticPde< 3, 3 >::ComputeLinearInUCoeffInSourceTerm) )
            , ( bp::arg("rX"), bp::arg("pElement") ) )    
        .def( 
            "ComputeLinearInUCoeffInSourceTermAtNode"
            , (double ( ::AbstractLinearEllipticPde<3, 3>::* )( ::Node< 3 > const & ))(&::AbstractLinearEllipticPde< 3, 3 >::ComputeLinearInUCoeffInSourceTermAtNode)
            , (double ( AbstractLinearEllipticPde_less__3_comma__3__greater__wrapper::* )( ::Node< 3 > const & ))(&AbstractLinearEllipticPde_less__3_comma__3__greater__wrapper::default_ComputeLinearInUCoeffInSourceTermAtNode)
            , ( bp::arg("rNode") ) );

}
