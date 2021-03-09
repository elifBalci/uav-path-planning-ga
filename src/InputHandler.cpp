//
// Created by elif on 9.03.2021.
//

#include <array>
#include <vector>
#include <fstream>
#include <iostream>
#include "InputHandler.h"

void InputHandler::readToArray() {
    std::vector<int> values;
    std::ifstream fp("path.txt");
    for (int value; fp >> value;) {
        values.emplace_back(value);
    }
    std::cout << "Read " << values.size() << " values:\n";
    for (auto &&value : values) std::cout << value << " ";
    std::cout << "\n";
}

void InputHandler::printArray(std::vector<std::vector<int>> v) {
    std::cout << v[1][1];
}

