#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "AbstractUpdateRule.hpp"

#include "AbstractUpdateRule2.cppwg.hpp"

namespace py = pybind11;
typedef AbstractUpdateRule<2 > AbstractUpdateRule2;
;

class AbstractUpdateRule2_Overloads : public AbstractUpdateRule2{
    public:
    using AbstractUpdateRule2::AbstractUpdateRule;
    void OutputUpdateRuleParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERLOAD_PURE(
            void,
            AbstractUpdateRule2,
            OutputUpdateRuleParameters,
            rParamsFile);
    }

};
void register_AbstractUpdateRule2_class(py::module &m){
py::class_<AbstractUpdateRule2 , AbstractUpdateRule2_Overloads   >(m, "AbstractUpdateRule2")
        .def(
            "OutputUpdateRuleInfo", 
            (void(AbstractUpdateRule2::*)(::out_stream &)) &AbstractUpdateRule2::OutputUpdateRuleInfo, 
            " " , py::arg("rParamsFile"))
        .def(
            "OutputUpdateRuleParameters", 
            (void(AbstractUpdateRule2::*)(::out_stream &)) &AbstractUpdateRule2::OutputUpdateRuleParameters, 
            " " , py::arg("rParamsFile"))
    ;
}