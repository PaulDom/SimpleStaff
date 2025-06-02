#pragma once
#include "Engineer.h"
#include "Interfaces.h"
#include "Project.h"
#include <vector>

class TeamLeader : public Programmer, public Heading{
private:
	int subordinatesCount = 0;

public:
	TeamLeader(int id, const std::string& name, int salary);

	void setSbordinatesCoun(int count) { subordinatesCount = count; }
	int getSbordinatesCoun() const { return subordinatesCount; }

	int calcHeads() override;
	void calc() override;
};


class ProjectManager : public Heading, public Employee {
protected:
	std::vector<Project*> projects;
	int subordinatesCount = 0;

public:
	ProjectManager(int id, const std::string& name);

	void setSbordinatesCoun(int count) { subordinatesCount = count; }
	int getSbordinatesCoun() const { return subordinatesCount; }

	int calcHeads() override;
	void calc() override;
};


class SeniorManager : public ProjectManager {
public:
	SeniorManager(int id, const std::string& name);

	void calc() override;
};
