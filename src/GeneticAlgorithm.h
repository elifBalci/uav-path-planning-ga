//
// Created by elif on 4.02.2021.
//

#ifndef UAVPATHPLANNINGGA_GENETICALGORITHM_H
#define UAVPATHPLANNINGGA_GENETICALGORITHM_H

#include "SolutionSpace.h"
#include "SolutionSpace.h"
#include <vector>
#include<algorithm>
#include <random>

class GeneticAlgorithm {
private:
    SolutionSpace solutionSpace;
    std::vector<std::vector<SolutionSpace::Coordination>> generation;
    std::vector<std::vector<SolutionSpace::Coordination>> matingPool;
    std::vector<float> fitnessValueList;
    std::vector<float> fitnessValueProbability;
    std::vector<float> fitnessProbabilityIntervals;

public:
    GeneticAlgorithm();

    static float evaluateIndividual(std::vector<SolutionSpace::Coordination> individual);

    void chooseForMatingPool();

    void inMatingPool();

    static float generateRandom();

    void fitnessValueManager();

    void createFitnessProbabilityIntervals();

    void printMatingPool();


};


#endif //UAVPATHPLANNINGGA_GENETICALGORITHM_H
