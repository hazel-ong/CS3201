#pragma once
class Follows
{
public:
	Follows(void);
	~Follows(void);
	static bool getFollow(int stmtIndex1, int stmtIndex2);
	static bool getFollowSTAR(int stmtIndex1, int stmtIndex2);
	static void addPair(int stmtIndex1,int stmtIndex2);
private:
	static int followPair[][2];
};

