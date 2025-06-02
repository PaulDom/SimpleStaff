#include "Personal.h"
#include <iostream>

Personal::Personal(int id, const std::string& name, int salary)
	: Employee(id, name, "Personal"), salary(salary) { }

int Personal::calcBase(int salary, int workTime) {
	return salary * workTime;
}

int Personal::calcBonus() {
	return 0;
}

void Personal::calc() {
	payment = calcBase(salary, worktime) + calcBonus();
}

void Personal::printInfo() const {
	std::cout	<< "ID: " << id << std::endl
				<< "Name: " << name << std::endl
				<< "Position: " << position << std::endl
				<< "Work time: " << worktime << std::endl
				<< "Salary: " << payment << std::endl
				<< "----------------------------------" << std::endl;
}



Driver::Driver(int id, const std::string& name, int salary)
	: Personal(id, name, salary) { 
	position = "Driver"; }

int Driver::calcBonus(){
	return 3 * worktime;
}

void Driver::calc() {
	payment = calcBase(salary, worktime) + calcBonus();
}

Cleaner::Cleaner(int id, const std::string& name, int salary)
	: Personal(id, name, salary) {
	position = "Cleaner";
}

void Cleaner::calc() {
	payment = calcBase(salary, worktime) + calcBonus();
}