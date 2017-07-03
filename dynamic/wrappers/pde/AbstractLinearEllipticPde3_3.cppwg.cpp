#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "AbstractLinearEllipticPde.hpp"

#include "AbstractLinearEllipticPde3_3.cppwg.hpp"

namespace py = pybind11;
typedef AbstractLinearEllipticPde<3,3 > AbstractLinearEllipticPde3_3;
;
typedef ::boost::numeric::ublas::c_matrix<double, 3, 3> _boost_numeric_ublas_c_matrixdouble_3_3;

class AbstractLinearEllipticPde3_3_Overloads : public AbstractLinearEllipticPde3_3{
    public:
    using AbstractLinearEllipticPde3_3::AbstractLinearEllipticPde;
    double ComputeConstantInUSourceTerm(::ChastePoint<3> const & rX, ::Element<3, 3> * pElement) override {
        PYBIND11_OVERLOAD_PURE(
            double,
            AbstractLinearEllipticPde3_3,
            ComputeConstantInUSourceTerm,
            rX, 
pElement);
    }
    double ComputeLinearInUCoeffInSourceTerm(::ChastePoint<3> const & rX, ::Element<3, 3> * pElement) override {
        PYBIND11_OVERLOAD_PURE(
            double,
            AbstractLinearEllipticPde3_3,
            ComputeLinearInUCoeffInSourceTerm,
            rX, 
pElement);
    }
    ::boost::numeric::ublas::c_matrix<double, 3, 3> ComputeDiffusionTerm(::ChastePoint<3> const & rX) override {
        PYBIND11_OVERLOAD_PURE(
            _boost_numeric_ublas_c_matrixdouble_3_3,
            AbstractLinearEllipticPde3_3,
            ComputeDiffusionTerm,
            rX);
    }
    double ComputeConstantInUSourceTermAtNode(::Node<3> const & rNode) override {
        PYBIND11_OVERLOAD(
            double,
            AbstractLinearEllipticPde3_3,
            ComputeConstantInUSourceTermAtNode,
            rNode);
    }
    double ComputeLinearInUCoeffInSourceTermAtNode(::Node<3> const & rNode) override {
        PYBIND11_OVERLOAD(
            double,
            AbstractLinearEllipticPde3_3,
            ComputeLinearInUCoeffInSourceTermAtNode,
            rNode);
    }

};
void register_AbstractLinearEllipticPde3_3_class(py::module &m){
py::class_<AbstractLinearEllipticPde3_3 , AbstractLinearEllipticPde3_3_Overloads   >(m, "AbstractLinearEllipticPde3_3")
        .def(
            "ComputeConstantInUSourceTerm", 
            (double(AbstractLinearEllipticPde3_3::*)(::ChastePoint<3> const &, ::Element<3, 3> *)) &AbstractLinearEllipticPde3_3::ComputeConstantInUSourceTerm, 
            " " , py::arg("rX"), py::arg("pElement"))
        .def(
            "ComputeLinearInUCoeffInSourceTerm", 
            (double(AbstractLinearEllipticPde3_3::*)(::ChastePoint<3> const &, ::Element<3, 3> *)) &AbstractLinearEllipticPde3_3::ComputeLinearInUCoeffInSourceTerm, 
            " " , py::arg("rX"), py::arg("pElement"))
        .def(
            "ComputeDiffusionTerm", 
            (::boost::numeric::ublas::c_matrix<double, 3, 3>(AbstractLinearEllipticPde3_3::*)(::ChastePoint<3> const &)) &AbstractLinearEllipticPde3_3::ComputeDiffusionTerm, 
            " " , py::arg("rX"))
        .def(
            "ComputeConstantInUSourceTermAtNode", 
            (double(AbstractLinearEllipticPde3_3::*)(::Node<3> const &)) &AbstractLinearEllipticPde3_3::ComputeConstantInUSourceTermAtNode, 
            " " , py::arg("rNode"))
        .def(
            "ComputeLinearInUCoeffInSourceTermAtNode", 
            (double(AbstractLinearEllipticPde3_3::*)(::Node<3> const &)) &AbstractLinearEllipticPde3_3::ComputeLinearInUCoeffInSourceTermAtNode, 
            " " , py::arg("rNode"))
    ;
}