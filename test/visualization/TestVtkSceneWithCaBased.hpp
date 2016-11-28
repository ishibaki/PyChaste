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
 * Redistributions in binary form must reproduce the abovea copyright notice,
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

#ifndef TESTVTKSCENE_HPP_
#define TESTVTKSCENE_HPP_

#include <cxxtest/TestSuite.h>
#include "CheckpointArchiveTypes.hpp"
#include "AbstractCellBasedTestSuite.hpp"
#include "PottsMeshGenerator.hpp"
#include "Cell.hpp"
#include "CellsGenerator.hpp"
#include "FixedG1GenerationalCellCycleModel.hpp"
#include "UniformCellCycleModel.hpp"
#include "CaBasedCellPopulation.hpp"
#include "CellMutationStatesCountWriter.hpp"
#include "CellProliferativeTypesCountWriter.hpp"
#include "CellProliferativePhasesCountWriter.hpp"
#include "CellProliferativePhasesWriter.hpp"
#include "CellAncestorWriter.hpp"
#include "CellAgesWriter.hpp"
#include "CellVolumesWriter.hpp"
#include "CellMutationStatesWriter.hpp"
#include "OnLatticeSimulation.hpp"
#include "SmartPointers.hpp"
#include "VtkScene.hpp"
#include "VtkSceneModifier.hpp"
#include "FileFinder.hpp"
#include "OutputFileHandler.hpp"
#include "HoneycombMeshGenerator.hpp"
#include "OffLatticeSimulation.hpp"
#include "MeshBasedCellPopulation.hpp"
#include "PottsBasedCellPopulation.hpp"
#include "MeshBasedCellPopulationWithGhostNodes.hpp"
#include "GeneralisedLinearSpringForce.hpp"
#include "VoronoiDataWriter.hpp"
#include "AdhesionPottsUpdateRule.hpp"
#include "VolumeConstraintPottsUpdateRule.hpp"

#include "PetscSetupAndFinalize.hpp"

class TestVtkScene : public AbstractCellBasedTestSuite
{
public:

    void Test2dCaBasedPopulation()
    {
        // Read the image from file
        OutputFileHandler file_handler1 = OutputFileHandler("TestVtkSceneWithCaBasedPopulation/2d");

        PottsMeshGenerator<2> generator(10, 0, 0, 10, 0, 0);
        PottsMesh<2>* p_mesh = generator.GetMesh();

        // Fill with cells
        std::vector<unsigned> location_indices;
        for(unsigned idx=0; idx<5; idx++)
        {
            location_indices.push_back(idx);
        }

        std::vector<CellPtr> cells;
        CellsGenerator<UniformCellCycleModel, 2> cells_generator;
        cells_generator.GenerateBasic(cells, location_indices.size());

        // Create cell population
        boost::shared_ptr<CaBasedCellPopulation<2> > p_cell_population =
                boost::shared_ptr<CaBasedCellPopulation<2> >(new CaBasedCellPopulation<2> (*p_mesh, cells, location_indices));

        boost::shared_ptr<VtkScene<2> > p_scene = boost::shared_ptr<VtkScene<2> >(new VtkScene<2>);
        p_scene->SetCellPopulation(p_cell_population);
        p_scene->SetIsInteractive(true);
        p_scene->SetOutputFilePath(file_handler1.GetOutputDirectoryFullPath()+"/cell_population");
        p_scene->GetCellPopulationActorGenerator()->SetShowPottsMeshEdges(true);

        boost::shared_ptr<VtkSceneModifier<2> > p_scene_modifier = boost::shared_ptr<VtkSceneModifier<2> >(new VtkSceneModifier<2>);
        p_scene_modifier->SetVtkScene(p_scene);

        p_scene->Start();
        OnLatticeSimulation<2> simulator(*p_cell_population);
        simulator.SetOutputDirectory("TestVtkSceneWithCaBasedPopulation/2d");
        simulator.SetDt(10.0);
        simulator.SetEndTime(400.0);
        simulator.AddSimulationModifier(p_scene_modifier);
        simulator.Solve();
        p_scene->StartInteractiveEventHandler();
    }

    void Test3dCaBasedPopulation()
    {
        // Read the image from file
        OutputFileHandler file_handler1 = OutputFileHandler("TestVtkSceneWithCaBasedPopulation/3d");

        PottsMeshGenerator<3> generator(10, 0, 0, 10, 0, 0, 3, 0, 0);
        PottsMesh<3>* p_mesh = generator.GetMesh();

        // Create a tumour cells in a cylinder in the middle of the domain
        std::vector<unsigned> location_indices;
        for(unsigned idx=0; idx<100; idx++)
        {
            location_indices.push_back(idx);
        }

        std::vector<CellPtr> cells;
        CellsGenerator<UniformCellCycleModel, 3> cells_generator;
        cells_generator.GenerateBasic(cells, location_indices.size());

        // Create cell population
        boost::shared_ptr<CaBasedCellPopulation<3> > p_cell_population =
                boost::shared_ptr<CaBasedCellPopulation<3> >(new CaBasedCellPopulation<3> (*p_mesh, cells, location_indices));

        boost::shared_ptr<VtkScene<3> > p_scene = boost::shared_ptr<VtkScene<3> >(new VtkScene<3>);
        p_scene->SetCellPopulation(p_cell_population);
        p_scene->SetIsInteractive(true);
        p_scene->GetCellPopulationActorGenerator()->SetShowPottsMeshEdges(true);
        p_scene->SetOutputFilePath(file_handler1.GetOutputDirectoryFullPath()+"/cell_population");

        boost::shared_ptr<VtkSceneModifier<3> > p_scene_modifier = boost::shared_ptr<VtkSceneModifier<3> >(new VtkSceneModifier<3>);
        p_scene_modifier->SetVtkScene(p_scene);

        p_scene->Start();
        OnLatticeSimulation<3> simulator(*p_cell_population);
        simulator.SetOutputDirectory("TestVtkSceneWithCaBasedPopulation/3d");
        simulator.SetDt(10.0);
        simulator.SetEndTime(400.0);
        simulator.AddSimulationModifier(p_scene_modifier);
        simulator.Solve();
    }

};
#endif
