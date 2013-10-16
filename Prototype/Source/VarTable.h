#pragma once

#include <vector>

class VarTable
{

public:
	VarTable(void);

	~VarTable(void);

	static bool exists(std::string var);

	static void addVar(std::string var);

private:
	static std::vector<std::string> varName;

};

