//
// Created by elif on 4.02.2021.
//

#include "GeneticAlgorithm.h"
#include <cmath>

GeneticAlgorithm::GeneticAlgorithm() {
    GeneticAlgorithm::generation = solutionSpace.generation;
    evaluateIndividual(generation[0]);
    std::cout << generation[0][0].i;
}

float GeneticAlgorithm::evaluateIndividual(std::vector<SolutionSpace::Coordination> individual) {
    SolutionSpace::Coordination previous = individual[0];
    SolutionSpace::Coordination current;
    float totalPoints = 0;
    float distance;

    for (int i = 1; i < individual.size(); i++) {
        current = individual[i];
        std::cout << individual[i].i;
        std::cout << individual[i].j;

        //if current is diagonal to past, add 1.5, else add 1
        distance = std::sqrt(std::pow(current.j - previous.j, 2) + std::pow(current.i - previous.i, 2));
        totalPoints = totalPoints - distance;
        previous = current;
    }
    std::cout << " points: ";
    std::cout << totalPoints;
    std::cout << "\n";
    return totalPoints;
}

void GeneticAlgorithm::chooseForMatingPool() {

}

void GeneticAlgorithm::inMatingPool() {

}






