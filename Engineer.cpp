#include "Engineer.h"

Engineer::Engineer(int id, const std::string& name, int salary)
    : Personal(id, name, salary), project(nullptr) {
    position = "Engineer";
}

int Engineer::calcBudgetPart(float part, int budget) {
    if (project){
        return static_cast<int>(part * budget);
    }
    return 0;
}

int Engineer::calcProAdditions(){
    return 0;
}

void Engineer::calc() {
    if (project) {
        payment = calcBase(salary, worktime) + calcBudgetPart(BONUS_PERCENT, project->budget) + calcProAdditions();
    }
    else {
        payment = calcBase(salary, worktime) + calcProAdditions();
    }
}

Tester::Tester(int id, const std::string& name, int salary)
    : Engineer(id, name, salary) { 
    position = "Tester";
}

int Tester::calcProAdditions(){
    return 100 * bugsFound;
}

Programmer::Programmer(int id, const std::string& name, int salary)
    : Engineer(id, name, salary) {
    position = "Programmer";
}

int Programmer::calcProAdditions(){
    if (project){
        return bonus;
    }
    return 0;
}
