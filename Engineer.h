#pragma once
#include "Personal.h"
#include "Interfaces.h"
#include "Project.h"

class Engineer : public Personal, public ProjectBudget{
protected:
    Project* project;
    const double BONUS_PERCENT = 0.1;

public:
    Engineer(int id, const std::string& name, int salary);

    void setProject(Project* prj) { project = prj; }
    Project* getProject() const { return project; }

    int calcBudgetPart(float part, int budget) override;
    int calcProAdditions() override;
    void calc() override;
};


class Tester : public Engineer {
private:
    int bugsFound = 0;

public:
    Tester(int id, const std::string& name, int salary);

    void setBugsFound(int bugs) { bugsFound = bugs; }
    int getBugsFound() const { return bugsFound; }

    int calcProAdditions() override;
};


class Programmer : public Engineer {
private:
    int bonus = 10000;

public:
    Programmer(int id, const std::string& name, int salaryPerHour);

    void setBonus(int bon) { bonus = bon; }
    int getBonus() const { return bonus; }

    int calcProAdditions() override;
};