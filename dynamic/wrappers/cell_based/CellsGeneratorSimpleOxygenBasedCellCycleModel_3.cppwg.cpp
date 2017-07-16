#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "NoCellCycleModel.hpp"
#include "UniformCellCycleModel.hpp"
#include "SimpleOxygenBasedCellCycleModel.hpp"
#include "UniformG1GenerationalCellCycleModel.hpp"
#include <set>
#include <vector>
#include <string>
#include <map>
#include "SmartPointers.hpp"
#include "UblasIncludes.hpp"
#include "CellsGenerator.hpp"

#include "CellsGeneratorSimpleOxygenBasedCellCycleModel_3.cppwg.hpp"

namespace py = pybind11;
typedef CellsGenerator<SimpleOxygenBasedCellCycleModel,3 > CellsGeneratorSimpleOxygenBasedCellCycleModel_3;
PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);

class CellsGeneratorSimpleOxygenBasedCellCycleModel_3_Overloads : CellsGeneratorSimpleOxygenBasedCellCycleModel_3{
    public:
    using CellsGeneratorSimpleOxygenBasedCellCycleModel_3::CellsGeneratorSimpleOxygenBasedCellCycleModel_3;
    std::vector<CellPtr> GenerateBasic(unsigned numCells, const std::vector<unsigned> locationIndices=std::vector<unsigned>(), boost::shared_ptr<AbstractCellProperty> pCellProliferativeType=boost::shared_ptr<AbstractCellProperty>())
    {
        std::vector<CellPtr> cells;
        CellsGeneratorSimpleOxygenBasedCellCycleModel_3::GenerateBasic(cells, numCells, locationIndices, pCellProliferativeType);
        return cells;
    };
    std::vector<CellPtr> GenerateBasicRandom(unsigned numCells, boost::shared_ptr<AbstractCellProperty> pCellProliferativeType=boost::shared_ptr<AbstractCellProperty>())
    {
        std::vector<CellPtr> cells;
        CellsGeneratorSimpleOxygenBasedCellCycleModel_3::GenerateBasicRandom(cells, numCells, pCellProliferativeType);
        return cells;
    };
    std::vector<CellPtr> GenerateGivenLocationIndices(const std::vector<unsigned> locationIndices, boost::shared_ptr<AbstractCellProperty> pCellProliferativeType=boost::shared_ptr<AbstractCellProperty>())
    {
        std::vector<CellPtr> cells;
        CellsGeneratorSimpleOxygenBasedCellCycleModel_3::GenerateGivenLocationIndices(cells, locationIndices, pCellProliferativeType);
        return cells;
    };
};


void register_CellsGeneratorSimpleOxygenBasedCellCycleModel_3_class(py::module &m){
py::class_<CellsGeneratorSimpleOxygenBasedCellCycleModel_3  , boost::shared_ptr<CellsGeneratorSimpleOxygenBasedCellCycleModel_3 >   >(m, "CellsGeneratorSimpleOxygenBasedCellCycleModel_3")
        .def(py::init< >())
        .def(
            "GenerateBasic", 
            (void(CellsGeneratorSimpleOxygenBasedCellCycleModel_3::*)(::std::vector<boost::shared_ptr<Cell>, std::allocator<boost::shared_ptr<Cell> > > &, unsigned int, ::std::vector<unsigned int, std::allocator<unsigned int> > const, ::boost::shared_ptr<AbstractCellProperty>)) &CellsGeneratorSimpleOxygenBasedCellCycleModel_3::GenerateBasic, 
            " " , py::arg("rCells"), py::arg("numCells"), py::arg("locationIndices") = std::vector<unsigned int>(), py::arg("pCellProliferativeType") = boost::shared_ptr<AbstractCellProperty>() )
        .def(
            "GenerateBasicRandom", 
            (void(CellsGeneratorSimpleOxygenBasedCellCycleModel_3::*)(::std::vector<boost::shared_ptr<Cell>, std::allocator<boost::shared_ptr<Cell> > > &, unsigned int, ::boost::shared_ptr<AbstractCellProperty>)) &CellsGeneratorSimpleOxygenBasedCellCycleModel_3::GenerateBasicRandom, 
            " " , py::arg("rCells"), py::arg("numCells"), py::arg("pCellProliferativeType") = boost::shared_ptr<AbstractCellProperty>() )
        .def(
            "GenerateGivenLocationIndices", 
            (void(CellsGeneratorSimpleOxygenBasedCellCycleModel_3::*)(::std::vector<boost::shared_ptr<Cell>, std::allocator<boost::shared_ptr<Cell> > > &, ::std::vector<unsigned int, std::allocator<unsigned int> > const, ::boost::shared_ptr<AbstractCellProperty>)) &CellsGeneratorSimpleOxygenBasedCellCycleModel_3::GenerateGivenLocationIndices, 
            " " , py::arg("rCells"), py::arg("locationIndices"), py::arg("pCellProliferativeType") = boost::shared_ptr<AbstractCellProperty>() )
        .def("GenerateBasic",
            (std::vector<CellPtr>(CellsGeneratorSimpleOxygenBasedCellCycleModel_3::*)(unsigned int, const std::vector<unsigned>, boost::shared_ptr<AbstractCellProperty>)) 
            &CellsGeneratorSimpleOxygenBasedCellCycleModel_3_Overloads::GenerateBasic, " " , py::arg("numCells"),  py::arg("locationIndices") = std::vector<unsigned int>(), py::arg("pCellProliferativeType") = boost::shared_ptr<AbstractCellProperty>())
        .def("GenerateBasicRandom",
            (std::vector<CellPtr>(CellsGeneratorSimpleOxygenBasedCellCycleModel_3::*)(unsigned int, boost::shared_ptr<AbstractCellProperty>)) 
            &CellsGeneratorSimpleOxygenBasedCellCycleModel_3_Overloads::GenerateBasicRandom, " " , py::arg("numCells"), py::arg("pCellProliferativeType") = boost::shared_ptr<AbstractCellProperty>())
        .def("GenerateGivenLocationIndices",
            (std::vector<CellPtr>(CellsGeneratorSimpleOxygenBasedCellCycleModel_3::*)(const std::vector<unsigned> locationIndices, boost::shared_ptr<AbstractCellProperty>)) 
            &CellsGeneratorSimpleOxygenBasedCellCycleModel_3_Overloads::GenerateGivenLocationIndices, " " , py::arg("locationIndices"), py::arg("pCellProliferativeType") = boost::shared_ptr<AbstractCellProperty>())
    ;
}
