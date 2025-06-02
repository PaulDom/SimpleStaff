#include "Manager.h"


TeamLeader::TeamLeader(int id, const std::string& name, int salary)
    : Programmer(id, name, salary) {
    position = "TeamLeader";
}

int TeamLeader::calcHeads(){
    const int PER_HEAD_BONUS = 5000;
    return subordinatesCount * PER_HEAD_BONUS;
}

void TeamLeader::calc(){
    if (project) {
        payment = calcBase(salary, worktime) + calcHeads() + calcBudgetPart(BONUS_PERCENT, project->budget);
    }
    payment = calcBase(salary, worktime) + calcHeads();
}



ProjectManager::ProjectManager(int id, const std::string& name)
    : Employee(id, name, "Project Manager") {
    projects.reserve(1);
}

int ProjectManager::calcHeads(){
    const int PER_HEAD_BONUS = 2000;
    return subordinatesCount * PER_HEAD_BONUS;
}

void ProjectManager::calc() {
    if (!projects.empty())
    {
        payment = calcHeads() + projects[0]->budget * 0.15f;
    }
    payment = calcHeads();
}



SeniorManager::SeniorManager(int id, const std::string& name)
    : ProjectManager(id, name) {
    position = "SeniorManager";
}

void SeniorManager::calc() {
    if (!projects.empty())
    {
        int total = 0;
        for (const Project* project : projects) {
            total += static_cast<int>(project->budget * 0.15);
        }
        payment = calcHeads() + total;
    }
    payment = calcHeads();
}
