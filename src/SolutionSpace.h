//
// Created by elif on 3.02.2021.
//

#ifndef UAVPATHPLANNINGGA_SOLUTIONSPACE_H
#define UAVPATHPLANNINGGA_SOLUTIONSPACE_H

#include <vector>
#include <iostream>


class SolutionSpace {
private:
    int const static lengthOfMap = 3;
    constexpr const static int map[lengthOfMap][lengthOfMap] = {{0, 1, 0},
                                                                {0, 0, 1},
                                                                {0, 0, 0}};
    std::vector<std::string> solutions;
    int goal_i = lengthOfMap - 1;
    int goal_j = lengthOfMap - 1;


public:
    struct Coordination {
        int i;
        int j;
    };
    std::vector<std::vector<Coordination>> generation;
    SolutionSpace();

    static void printMap();

    void createRandomSolutions();

    bool checkGoal(SolutionSpace::Coordination current) const;

    static Coordination findRandomAdjacent(Coordination currentCoordination);

    static void printGeneration(std::vector<std::vector<Coordination>> generation);

    static void printAdjacentVector(const std::vector<SolutionSpace::Coordination> &coordinations);

    static bool checkEligibilty(Coordination c1, Coordination c2);

    std::vector<std::vector<Coordination>> getFirstGeneration();


};

#endif //UAVPATHPLANNINGGA_SOLUTIONSPACE_H
