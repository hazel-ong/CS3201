#pragma once
#include <string>
#include <vector>
using namespace std;
class ASTNode
{
public:
	ASTNode(void);
	~ASTNode(void);
	ASTNode getParent();
	ASTNode getChild(int index);
	int getType();
	string getValue();
	int getStmt();
private:
	int nodeType;
	string value;
	ASTNode *parentNode;
	vector<ASTNode> childrenNode;
	int stmt;
};

