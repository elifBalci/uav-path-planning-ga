//
// Created by Elif Balci on 3.02.2021.
//
//
#include <algorithm>
#include <random>
#include "SolutionSpace.h"


SolutionSpace::SolutionSpace() {
    inputHandler.readToArray();
    srand(time(nullptr));
    createRandomSolutions();
    printGeneration(generation);
}

void SolutionSpace::printMap() {
    for (auto row : map) {
        for (int column = 0; column < 3; column++) {
            std::cout << row[column] << " ";
        }
        std::cout << std::endl;
    }
}

void SolutionSpace::createRandomSolutions() {
    Coordination initialCoordination{0, 0};
    Coordination c{};
    int isGoalFound = 0;
    for (int i = 0; i < 10; i++) {
        std::vector<Coordination> route;
        route.push_back(initialCoordination);
        while (!isGoalFound) {
            c = findRandomAdjacent(initialCoordination);
            bool isEligible = checkEligibilty(initialCoordination, c);
            if (isEligible) {
                route.push_back(c);
                isGoalFound = checkGoal(c);
                initialCoordination = c;
            }
        }
        isGoalFound = 0;
        generation.push_back(route);
        route.clear();
        initialCoordination.i = 0;
        initialCoordination.j = 0;
    }
}


bool SolutionSpace::checkGoal(SolutionSpace::Coordination current) const {
    if (current.i == goal_i && current.j == goal_j)
        return true;
    return false;
}

SolutionSpace::Coordination SolutionSpace::findRandomAdjacent(SolutionSpace::Coordination currentCoordination) {
    std::vector<SolutionSpace::Coordination> adjacentCoordination;
    int i = currentCoordination.i;
    int j = currentCoordination.j;

    for (int x = -1; x <= 1; x++) {
        for (int y = -1; y <= 1; y++) {
            if (i + x >= 0 && j + y >= 0 && !(i + x == i && j + y == j)) {
                if (*map[i + x, j + y] == 0) {
                    if ((i + x < lengthOfMap && j + y < lengthOfMap)) {
                        Coordination c1{i + x, j + y};
                        adjacentCoordination.push_back(c1);
                    }
                }
            }
        }
    }
    const int range_from = 0;
    int range_to = adjacentCoordination.size();
    std::random_device rand_dev;
    std::mt19937 generator(rand_dev());
    std::uniform_int_distribution<int> distr(range_from, range_to);

    Coordination c = adjacentCoordination[distr(generator)];
    return c;
}

void SolutionSpace::printGeneration(std::vector<std::vector<Coordination>> generation) {
    std::cout << "\n Population: \n";
    for (auto &i : generation) {
        for (auto &j : i) {
            std::cout << j.i;
            std::cout << j.j;
        }
        std::cout << "\n";
    }
}

void SolutionSpace::printAdjacentVector(const std::vector<SolutionSpace::Coordination> &coordinations) {
    for (auto &coordination : coordinations) {
        std::cout << "\n..printing..";
        std::cout << coordination.i;
        std::cout << coordination.j;
        std::cout << map[coordination.i][coordination.j];

    }
}

bool SolutionSpace::checkEligibilty(SolutionSpace::Coordination c1, SolutionSpace::Coordination c2) {
    int diff1 = c1.i - c2.i;
    int diff2 = c2.j - c2.j;

    if (map[c2.i][c2.j] == 1) {
        return false;
    }
    if (c1.i == c2.i and c2.j == c1.j) {
        return false;
    }
    if (diff1 <= 1 and diff1 >= -1 and diff2 <= 1 and diff2 >= -1) {
        return true;
    }
    return false;
}

std::vector<std::vector<SolutionSpace::Coordination>> SolutionSpace::getFirstGeneration() {

    return generation;
}
