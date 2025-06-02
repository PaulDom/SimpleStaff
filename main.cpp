#include <iostream>
#include "Project.h"
#include "Manager.h"

int main()
{
	Driver* dr1 = new Driver(2, "ivanov ivan", 200);
	dr1->printInfo();
	dr1->setWorkTime(20);
	dr1->calc();
	dr1->printInfo();

	struct Project firstProject;
	firstProject.name = "Huita";
	firstProject.budget = 1000000;


	Programmer* dr2 = new Programmer(3, "vasya petrov", 350);
	dr2->setWorkTime(100);
	dr2->setProject(&firstProject);
	dr2->calc();
	dr2->printInfo();
	
}

