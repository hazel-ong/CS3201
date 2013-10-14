#pragma once
#include <vector>
using namespace std;
class ProcTable
{
public:
	ProcTable(void);
	~ProcTable(void);
	static bool exists(string proc);
	static void addProc(string proc);
private:
	static vector<string> procName;
};

