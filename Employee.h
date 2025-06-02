#pragma once
#include <string>

class Employee
{
protected:
    int id;
    std::string name;
    std::string position;
    int worktime;
    int payment;

public:
    Employee(int id, const std::string& name, const std::string& position);
    virtual ~Employee() = default;

    void setWorkTime(int hours) { worktime = hours; }
    virtual void calc() = 0;
    virtual void printInfo() const = 0;

    int getId() const { return id; }
    std::string getName() const { return name; }
    std::string getPosition() const { return position; }
    int getWorkTime() const { return worktime; }
    int getPayment() const { return payment; }
};

