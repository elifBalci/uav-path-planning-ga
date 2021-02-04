cmake_minimum_required(VERSION 3.17)
project(UAVPathPlanningGA)

set(CMAKE_CXX_STANDARD 17)

add_executable(UAVPathPlanningGA src/main.cpp src/SolutionSpace.cpp src/SolutionSpace.h src/GeneticAlgorithm.cpp src/GeneticAlgorithm.h)