#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "AbstractPythonOdeSystemInformation.hpp"

#include "AbstractPythonOdeSystemInformation.cppwg.hpp"

namespace py = pybind11;
typedef AbstractPythonOdeSystemInformation AbstractPythonOdeSystemInformation;
;

class AbstractPythonOdeSystemInformation_Overloads : public AbstractPythonOdeSystemInformation{
    public:
    using AbstractPythonOdeSystemInformation::AbstractPythonOdeSystemInformation;
    void Initialise() override {
        PYBIND11_OVERLOAD_PURE(
            void,
            AbstractPythonOdeSystemInformation,
            Initialise,
            );
    }

};
void register_AbstractPythonOdeSystemInformation_class(py::module &m){
py::class_<AbstractPythonOdeSystemInformation , AbstractPythonOdeSystemInformation_Overloads  , AbstractOdeSystemInformation  >(m, "AbstractPythonOdeSystemInformation")
        .def(
            "AddVariableName", 
            (void(AbstractPythonOdeSystemInformation::*)(::std::string const &)) &AbstractPythonOdeSystemInformation::AddVariableName, 
            " " , py::arg("rName"))
        .def(
            "AddVariableUnit", 
            (void(AbstractPythonOdeSystemInformation::*)(::std::string const &)) &AbstractPythonOdeSystemInformation::AddVariableUnit, 
            " " , py::arg("rUnit"))
        .def(
            "SetIsInitialised", 
            (void(AbstractPythonOdeSystemInformation::*)(bool)) &AbstractPythonOdeSystemInformation::SetIsInitialised, 
            " " , py::arg("isInitialized") = true)
    ;
}