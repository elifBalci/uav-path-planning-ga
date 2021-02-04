//
// Created by elif on 4.02.2021.
//

#include "GeneticAlgorithm.h"
#include <cmath>
#include <random>


GeneticAlgorithm::GeneticAlgorithm() {
    GeneticAlgorithm::generation = solutionSpace.generation;
    chooseForMatingPool();
}

float GeneticAlgorithm::evaluateIndividual(std::vector<SolutionSpace::Coordination> individual) {
    SolutionSpace::Coordination previous = individual[0];
    SolutionSpace::Coordination current{};
    float totalPoints = 0;
    float distance;
    for (int i = 1; i < individual.size(); i++) {
        current = individual[i];
        distance = std::sqrt(std::pow(current.j - previous.j, 2) + std::pow(current.i - previous.i, 2));
        totalPoints = totalPoints - distance;
        previous = current;
    }
    return totalPoints;
}

void GeneticAlgorithm::chooseForMatingPool() {
    fitnessValueManager();
    float random = 0;
    for (int i = 0; i < generation.size(); i++) {
        random = generateRandom();
        std::vector<SolutionSpace::Coordination> selected;
        for (int j = 0; j < fitnessProbabilityIntervals.size(); j++) {
            if (random < fitnessProbabilityIntervals[j]) {
                selected = generation[j];
                break;
            }
        }
        matingPool.push_back(selected);
    }
    printMatingPool();
}

void GeneticAlgorithm::inMatingPool() {

}

float GeneticAlgorithm::generateRandom() {
    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_real_distribution<> dis(0.0, 1.0);
    return dis(gen);
}

void GeneticAlgorithm::fitnessValueManager() {
    fitnessValueList.clear();
    float totalFitnessValue = 0;
    float fitnessValue = 0;
    for (auto &i : generation) {
        fitnessValue = 1/evaluateIndividual(i);
        totalFitnessValue += fitnessValue;
        fitnessValueList.push_back(fitnessValue);
    }

    for (auto &i : fitnessValueList) {
        std::cout << i / totalFitnessValue;
        fitnessValueProbability.push_back(i / totalFitnessValue);
    }
    createFitnessProbabilityIntervals();
}

void GeneticAlgorithm::createFitnessProbabilityIntervals() {
    float previous = 0;
    float current = 0;
    for (float i : fitnessValueProbability) {
        current = i;
        fitnessProbabilityIntervals.push_back(current + previous);
        previous = current + previous;
    }
}

void GeneticAlgorithm::printMatingPool() {
    std::cout << "\n MatingPool: \n";
    for (auto &i : GeneticAlgorithm::matingPool) {
        for (auto &j : i) {
            std::cout << j.i;
            std::cout << j.j;
        }
        std::cout << "\n";
    }
}




