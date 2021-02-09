//
// Created by elif on 4.02.2021.
//

#include "GeneticAlgorithm.h"
#include <cmath>
#include <random>

GeneticAlgorithm::GeneticAlgorithm() {
    GeneticAlgorithm::generation = solutionSpace.generation;
    chooseForMatingPool();
    inMatingPool();
    mutate();
    SolutionSpace::printGeneration(generation);
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
    float random;
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
    float random = generateRandom();
    std::vector<std::vector<SolutionSpace::Coordination>> temp;
    for (int i = 0; i < generation.size() / 2; ++i) {
        if (random < crossoverProbability) {
            temp = onePointCrossover(generation[i], generation[i + 1]);
            generation[i] = temp[0];
            generation[i + 1] = temp[1];
            temp.clear();
        }
        random = generateRandom();
    }

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
    float fitnessValue;
    for (auto &i : generation) {
        fitnessValue = 1 / evaluateIndividual(i);
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
    float current;
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

std::vector<std::vector<SolutionSpace::Coordination>>
GeneticAlgorithm::onePointCrossover(std::vector<SolutionSpace::Coordination> c1,
                                    std::vector<SolutionSpace::Coordination> c2) {
    float minSize = std::min(c1.size(), c2.size());
    int random = int(generateRandom() * minSize);

    std::vector<SolutionSpace::Coordination> temp1;
    std::vector<SolutionSpace::Coordination> temp2;
    std::vector<SolutionSpace::Coordination> temp3;
    std::vector<SolutionSpace::Coordination> temp4;

    for (int i = 0; i < c1.size(); ++i) {
        if (i <= random) {
            temp1.push_back(c1[i]);
        } else {
            temp3.push_back(c1[i]);
        }
    }
    for (int i = 0; i < c2.size(); ++i) {
        if (i <= random) {
            temp2.push_back(c2[i]);
        } else {
            temp4.push_back(c2[i]);
        }
    }
    c1.clear();
    c1 = temp1;
    c1.insert(c1.end(), temp4.begin(), temp4.end());
    c2.clear();
    c2 = temp2;
    c2.insert(c2.end(), temp3.begin(), temp3.end());
    std::vector<std::vector<SolutionSpace::Coordination>> returnList;
    returnList.push_back(c1);
    returnList.push_back(c2);
    return returnList;
}

void GeneticAlgorithm::mutate() {
    float random;
    for (auto &i : generation) {
        for (int j = 0; j < generation[j].size(); j++) {
            random = generateRandom();
            if (random < mutationProbability) {
                if (i[j].i == 0) {
                    i[j].i = 1;
                } else {
                    i[j].i = 0;
                }
                if (i[j].j == 1) {
                    i[j].j = 0;
                } else {
                    i[j].j = 1;
                }
            }

        }

    }

}




