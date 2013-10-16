#pragma once
class Parent
{
public:
	Parent(void);
	~Parent(void);
	static bool getParent(int stmtIndex1, int stmtIndex2);
	static bool getParentSTAR(int stmtIndex1, int stmtIndex2);
	static void addPair(int stmtIndex1,int stmtIndex2);
private:
	static int parentPair[][2];
};

