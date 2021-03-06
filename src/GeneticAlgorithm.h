//
// Created by elif on 4.02.2021.
//

#ifndef UAVPATHPLANNINGGA_GENETICALGORITHM_H
#define UAVPATHPLANNINGGA_GENETICALGORITHM_H

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
    float bestSoluiton = std::numeric_limits<float>::max();
    int stoppingCriteria = 5;
    float crossoverProbability = 0.20;
    float mutationProbability = 0.02;

public:
    GeneticAlgorithm();

    void startEvolution();

    static float evaluateIndividual(std::vector<SolutionSpace::Coordination> individual);

    void chooseForMatingPool();

    void inMatingPool();

    static float generateRandom();

    void fitnessValueManager();

    void createFitnessProbabilityIntervals();

    void printMatingPool();

    static std::vector<std::vector<SolutionSpace::Coordination>> onePointCrossover(std::vector<SolutionSpace::Coordination> c1, std::vector<SolutionSpace::Coordination> c2);

    void mutate();

    static bool isFeasible(std::vector<std::vector<SolutionSpace::Coordination>>);

    static float findBestValue(std::vector<std::vector<SolutionSpace::Coordination>>);

    static float findDistance(std::vector<SolutionSpace::Coordination> individual);
};


#endif //UAVPATHPLANNINGGA_GENETICALGORITHM_H
