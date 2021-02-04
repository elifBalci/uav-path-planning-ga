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
    struct coordination {
        int i;
        int j;
    };
    std::vector<std::vector<coordination>> generation;

public:
    SolutionSpace();

    static void printMap();

    void createRandomSolutions();

    bool checkGoal(SolutionSpace::coordination current) const;

    static coordination findRandomAdjacent(coordination currentCoordination);

    void printGeneration();

    static void printAdjacentVector(const std::vector<SolutionSpace::coordination> &coordinations);

    static bool checkEligibilty(coordination c1, coordination c2);
};

#endif //UAVPATHPLANNINGGA_SOLUTIONSPACE_H
