#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "GeneralisedLinearSpringForce.hpp"

#include "GeneralisedLinearSpringForce2_2.cppwg.hpp"

namespace py = pybind11;
typedef GeneralisedLinearSpringForce<2,2 > GeneralisedLinearSpringForce2_2;
;
typedef ::boost::numeric::ublas::c_vector<double, 2> _boost_numeric_ublas_c_vectordouble_2;

class GeneralisedLinearSpringForce2_2_Overloads : public GeneralisedLinearSpringForce2_2{
    public:
    using GeneralisedLinearSpringForce2_2::GeneralisedLinearSpringForce;
    double VariableSpringConstantMultiplicationFactor(unsigned int nodeAGlobalIndex, unsigned int nodeBGlobalIndex, ::AbstractCellPopulation<2, 2> & rCellPopulation, bool isCloserThanRestLength) override {
        PYBIND11_OVERLOAD(
            double,
            GeneralisedLinearSpringForce2_2,
            VariableSpringConstantMultiplicationFactor,
            nodeAGlobalIndex, 
nodeBGlobalIndex, 
rCellPopulation, 
isCloserThanRestLength);
    }
    ::boost::numeric::ublas::c_vector<double, 2> CalculateForceBetweenNodes(unsigned int nodeAGlobalIndex, unsigned int nodeBGlobalIndex, ::AbstractCellPopulation<2, 2> & rCellPopulation) override {
        PYBIND11_OVERLOAD(
            _boost_numeric_ublas_c_vectordouble_2,
            GeneralisedLinearSpringForce2_2,
            CalculateForceBetweenNodes,
            nodeAGlobalIndex, 
nodeBGlobalIndex, 
rCellPopulation);
    }
    void OutputForceParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERLOAD(
            void,
            GeneralisedLinearSpringForce2_2,
            OutputForceParameters,
            rParamsFile);
    }

};
void register_GeneralisedLinearSpringForce2_2_class(py::module &m){
py::class_<GeneralisedLinearSpringForce2_2 , GeneralisedLinearSpringForce2_2_Overloads   >(m, "GeneralisedLinearSpringForce2_2")
        .def(py::init< >())
        .def(
            "VariableSpringConstantMultiplicationFactor", 
            (double(GeneralisedLinearSpringForce2_2::*)(unsigned int, unsigned int, ::AbstractCellPopulation<2, 2> &, bool)) &GeneralisedLinearSpringForce2_2::VariableSpringConstantMultiplicationFactor, 
            " " , py::arg("nodeAGlobalIndex"), py::arg("nodeBGlobalIndex"), py::arg("rCellPopulation"), py::arg("isCloserThanRestLength"))
        .def(
            "CalculateForceBetweenNodes", 
            (::boost::numeric::ublas::c_vector<double, 2>(GeneralisedLinearSpringForce2_2::*)(unsigned int, unsigned int, ::AbstractCellPopulation<2, 2> &)) &GeneralisedLinearSpringForce2_2::CalculateForceBetweenNodes, 
            " " , py::arg("nodeAGlobalIndex"), py::arg("nodeBGlobalIndex"), py::arg("rCellPopulation"))
        .def(
            "GetMeinekeSpringStiffness", 
            (double(GeneralisedLinearSpringForce2_2::*)()) &GeneralisedLinearSpringForce2_2::GetMeinekeSpringStiffness, 
            " " )
        .def(
            "GetMeinekeDivisionRestingSpringLength", 
            (double(GeneralisedLinearSpringForce2_2::*)()) &GeneralisedLinearSpringForce2_2::GetMeinekeDivisionRestingSpringLength, 
            " " )
        .def(
            "GetMeinekeSpringGrowthDuration", 
            (double(GeneralisedLinearSpringForce2_2::*)()) &GeneralisedLinearSpringForce2_2::GetMeinekeSpringGrowthDuration, 
            " " )
        .def(
            "SetMeinekeSpringStiffness", 
            (void(GeneralisedLinearSpringForce2_2::*)(double)) &GeneralisedLinearSpringForce2_2::SetMeinekeSpringStiffness, 
            " " , py::arg("springStiffness"))
        .def(
            "SetMeinekeDivisionRestingSpringLength", 
            (void(GeneralisedLinearSpringForce2_2::*)(double)) &GeneralisedLinearSpringForce2_2::SetMeinekeDivisionRestingSpringLength, 
            " " , py::arg("divisionRestingSpringLength"))
        .def(
            "SetMeinekeSpringGrowthDuration", 
            (void(GeneralisedLinearSpringForce2_2::*)(double)) &GeneralisedLinearSpringForce2_2::SetMeinekeSpringGrowthDuration, 
            " " , py::arg("springGrowthDuration"))
        .def(
            "OutputForceParameters", 
            (void(GeneralisedLinearSpringForce2_2::*)(::out_stream &)) &GeneralisedLinearSpringForce2_2::OutputForceParameters, 
            " " , py::arg("rParamsFile"))
    ;
}