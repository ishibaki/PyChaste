#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "AbstractSimplePhaseBasedCellCycleModel.hpp"

#include "PythonObjectConverters.hpp"
#include "AbstractSimplePhaseBasedCellCycleModel.cppwg.hpp"

namespace py = pybind11;
PYBIND11_CVECTOR_TYPECASTER2();
PYBIND11_CVECTOR_TYPECASTER3();   
typedef AbstractSimplePhaseBasedCellCycleModel AbstractSimplePhaseBasedCellCycleModel;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

class AbstractSimplePhaseBasedCellCycleModel_Overloads : public AbstractSimplePhaseBasedCellCycleModel{
    public:
    using AbstractSimplePhaseBasedCellCycleModel::AbstractSimplePhaseBasedCellCycleModel;
    void ResetForDivision() override {
        PYBIND11_OVERLOAD(
            void,
            AbstractSimplePhaseBasedCellCycleModel,
            ResetForDivision,
            );
    }
    void UpdateCellCyclePhase() override {
        PYBIND11_OVERLOAD(
            void,
            AbstractSimplePhaseBasedCellCycleModel,
            UpdateCellCyclePhase,
            );
    }
    void InitialiseDaughterCell() override {
        PYBIND11_OVERLOAD(
            void,
            AbstractSimplePhaseBasedCellCycleModel,
            InitialiseDaughterCell,
            );
    }
    void Initialise() override {
        PYBIND11_OVERLOAD(
            void,
            AbstractSimplePhaseBasedCellCycleModel,
            Initialise,
            );
    }
    void OutputCellCycleModelParameters(::out_stream & rParamsFile) override {
        PYBIND11_OVERLOAD(
            void,
            AbstractSimplePhaseBasedCellCycleModel,
            OutputCellCycleModelParameters,
            rParamsFile);
    }
    void SetG1Duration() override {
        PYBIND11_OVERLOAD(
            void,
            AbstractSimplePhaseBasedCellCycleModel,
            SetG1Duration,
            );
    }

};
void register_AbstractSimplePhaseBasedCellCycleModel_class(py::module &m){
py::class_<AbstractSimplePhaseBasedCellCycleModel , AbstractSimplePhaseBasedCellCycleModel_Overloads , boost::shared_ptr<AbstractSimplePhaseBasedCellCycleModel >  , AbstractPhaseBasedCellCycleModel  >(m, "AbstractSimplePhaseBasedCellCycleModel")
        .def(
            "ResetForDivision", 
            (void(AbstractSimplePhaseBasedCellCycleModel::*)()) &AbstractSimplePhaseBasedCellCycleModel::ResetForDivision, 
            " "  )
        .def(
            "UpdateCellCyclePhase", 
            (void(AbstractSimplePhaseBasedCellCycleModel::*)()) &AbstractSimplePhaseBasedCellCycleModel::UpdateCellCyclePhase, 
            " "  )
        .def(
            "InitialiseDaughterCell", 
            (void(AbstractSimplePhaseBasedCellCycleModel::*)()) &AbstractSimplePhaseBasedCellCycleModel::InitialiseDaughterCell, 
            " "  )
        .def(
            "Initialise", 
            (void(AbstractSimplePhaseBasedCellCycleModel::*)()) &AbstractSimplePhaseBasedCellCycleModel::Initialise, 
            " "  )
        .def(
            "OutputCellCycleModelParameters", 
            (void(AbstractSimplePhaseBasedCellCycleModel::*)(::out_stream &)) &AbstractSimplePhaseBasedCellCycleModel::OutputCellCycleModelParameters, 
            " " , py::arg("rParamsFile") )
    ;
}
