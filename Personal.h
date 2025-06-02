#pragma once
#include "Employee.h"
#include "Interfaces.h"

class Personal : public Employee, public WorkBaseTime {
protected:
    int salary;

public:
    Personal(int id, const std::string& name, int salary);
    virtual ~Personal() override = default;

    int calcBase(int salary, int workTime) override;
    int calcBonus() override;

    void calc() override;
    void printInfo() const override;
};

class Driver : public Personal {
public:
    Driver(int id, const std::string& name, int salary);

    int calcBonus() override;
    void calc() override;
};


class Cleaner : public Personal {
public:
    Cleaner(int id, const std::string& name, int salary);

    void calc() override;
};

