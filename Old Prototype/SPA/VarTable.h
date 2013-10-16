#pragma once
#include <vector>
using namespace std;
class VarTable
{
public:
	VarTable(void);
	~VarTable(void);
	static bool exists(string var);
	static void addVar(string var);
private:
	static vector<string> varName;
};

