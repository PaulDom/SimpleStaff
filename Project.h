#pragma once
#include <string>


struct Project {
    std::string name;
    int budget;

    int getBudget() const { return budget; }
};

