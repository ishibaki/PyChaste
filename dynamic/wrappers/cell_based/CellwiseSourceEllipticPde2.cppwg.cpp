#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "CellwiseSourceEllipticPde.hpp"

#include "CellwiseSourceEllipticPde2.cppwg.hpp"

namespace py = pybind11;
typedef CellwiseSourceEllipticPde<2 > CellwiseSourceEllipticPde2;
;
typedef ::boost::numeric::ublas::c_matrix<double, 2, 2> _boost_numeric_ublas_c_matrixdouble_2_2;

class CellwiseSourceEllipticPde2_Overloads : public CellwiseSourceEllipticPde2{
    public:
    using CellwiseSourceEllipticPde2::CellwiseSourceEllipticPde;
    double ComputeConstantInUSourceTerm(::ChastePoint<2> const & rX, ::Element<2, 2> * pElement) override {
        PYBIND11_OVERLOAD(
            double,
            CellwiseSourceEllipticPde2,
            ComputeConstantInUSourceTerm,
            rX, 
pElement);
    }
    double ComputeLinearInUCoeffInSourceTerm(::ChastePoint<2> const & rX, ::Element<2, 2> * pElement) override {
        PYBIND11_OVERLOAD(
            double,
            CellwiseSourceEllipticPde2,
            ComputeLinearInUCoeffInSourceTerm,
            rX, 
pElement);
    }
    double ComputeLinearInUCoeffInSourceTermAtNode(::Node<2> const & rNode) override {
        PYBIND11_OVERLOAD(
            double,
            CellwiseSourceEllipticPde2,
            ComputeLinearInUCoeffInSourceTermAtNode,
            rNode);
    }
    ::boost::numeric::ublas::c_matrix<double, 2, 2> ComputeDiffusionTerm(::ChastePoint<2> const & rX) override {
        PYBIND11_OVERLOAD(
            _boost_numeric_ublas_c_matrixdouble_2_2,
            CellwiseSourceEllipticPde2,
            ComputeDiffusionTerm,
            rX);
    }

};
void register_CellwiseSourceEllipticPde2_class(py::module &m){
py::class_<CellwiseSourceEllipticPde2 , CellwiseSourceEllipticPde2_Overloads   >(m, "CellwiseSourceEllipticPde2")
        .def(py::init<::AbstractCellPopulation<2, 2> &, double >(), py::arg("rCellPopulation"), py::arg("sourceCoefficient") = 0.)
        .def(
            "rGetCellPopulation", 
            (::AbstractCellPopulation<2, 2> const &(CellwiseSourceEllipticPde2::*)() const ) &CellwiseSourceEllipticPde2::rGetCellPopulation, 
            " " )
        .def(
            "GetCoefficient", 
            (double(CellwiseSourceEllipticPde2::*)() const ) &CellwiseSourceEllipticPde2::GetCoefficient, 
            " " )
        .def(
            "ComputeConstantInUSourceTerm", 
            (double(CellwiseSourceEllipticPde2::*)(::ChastePoint<2> const &, ::Element<2, 2> *)) &CellwiseSourceEllipticPde2::ComputeConstantInUSourceTerm, 
            " " , py::arg("rX"), py::arg("pElement"))
        .def(
            "ComputeLinearInUCoeffInSourceTerm", 
            (double(CellwiseSourceEllipticPde2::*)(::ChastePoint<2> const &, ::Element<2, 2> *)) &CellwiseSourceEllipticPde2::ComputeLinearInUCoeffInSourceTerm, 
            " " , py::arg("rX"), py::arg("pElement"))
        .def(
            "ComputeLinearInUCoeffInSourceTermAtNode", 
            (double(CellwiseSourceEllipticPde2::*)(::Node<2> const &)) &CellwiseSourceEllipticPde2::ComputeLinearInUCoeffInSourceTermAtNode, 
            " " , py::arg("rNode"))
        .def(
            "ComputeDiffusionTerm", 
            (::boost::numeric::ublas::c_matrix<double, 2, 2>(CellwiseSourceEllipticPde2::*)(::ChastePoint<2> const &)) &CellwiseSourceEllipticPde2::ComputeDiffusionTerm, 
            " " , py::arg("rX"))
    ;
}