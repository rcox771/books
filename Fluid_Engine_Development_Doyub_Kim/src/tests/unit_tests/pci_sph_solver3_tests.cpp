// Copyright (c) 2016 Doyub Kim

#include <jet/pci_sph_solver3.h>
#include <gtest/gtest.h>

using namespace jet;

TEST(PciSphSolver3, UpdateEmpty) {
    // Empty solver test
    PciSphSolver3 solver;
    Frame frame(1, 0.01);
    solver.update(frame);
    solver.update(frame);
}

TEST(PciSphSolver3, Parameters) {
    PciSphSolver3 solver;

    solver.setMaxDensityErrorRatio(5.0);
    EXPECT_DOUBLE_EQ(5.0, solver.maxDensityErrorRatio());

    solver.setMaxDensityErrorRatio(-1.0);
    EXPECT_DOUBLE_EQ(0.0, solver.maxDensityErrorRatio());

    solver.setMaxNumberOfIterations(10);
    EXPECT_DOUBLE_EQ(10, solver.maxNumberOfIterations());
}
