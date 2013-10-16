#pragma once

#include <vector>

class ProcTable
{

public:
	ProcTable(void);

	~ProcTable(void);

	static bool exists(std::string proc);

	static void addProc(std::string proc);

private:
	static std::vector<std::string> procName;

};

