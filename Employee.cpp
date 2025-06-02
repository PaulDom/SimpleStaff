#include "Employee.h"
#include <iostream>


Employee::Employee(int id, const std::string& name, const std::string& position)
    : id(id), name(name), position(position), worktime(0), payment(0) {
}