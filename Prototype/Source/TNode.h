#pragma once

#include <string>
#include <vector>

// TODO (Hieu) add more desciption to the method signature eg return value if invalid, throw exception etc

class TNode
{

public: 
	TNode(void);
	
	~TNode(void);
	
	// Get the parent of the node
	TNode getParent();

	// Get the ith child of the node
	TNode getChild(int);

	// return the integer representation of the node type
	int getType();

	// return the string content of the node
	std::string getValue();

	// return the statement no represented by the node
	int getStatementNo();

private:
	// the type of the nodes: procedure, call, assignment etc ...
	int nodeType;
	
	std::string value;

	TNode *parentNode;

	std::vector<TNode> childNodeVector;

	int statementNo;

};