//
// Created by elif on 4.02.2021.
//

#ifndef UAVPATHPLANNINGGA_GENETICALGORITHM_H
#define UAVPATHPLANNINGGA_GENETICALGORITHM_H

#include "SolutionSpace.h"
#include "SolutionSpace.h"
#include <vector>
#include<algorithm>

class GeneticAlgorithm {
private:
    SolutionSpace solutionSpace;
    std::vector<std::vector<SolutionSpace::Coordination>> generation;
    std::vector<std::vector<SolutionSpace::Coordination>> matingPool;

public:
    GeneticAlgorithm();
    float evaluateIndividual(std::vector<SolutionSpace::Coordination> individual);
    void chooseForMatingPool();
    void inMatingPool();


};


#endif //UAVPATHPLANNINGGA_GENETICALGORITHM_H
