#include "TNode.h"

using std::string;
using std::vector;

TNode::TNode(void)
{

}

TNode::~TNode(void)
{

}

TNode TNode::getParent()
{
	return *parentNode;
}

TNode TNode::getChild(int index)
{
	return childNodeVector.at(index);
}

int getType()
{
	return 0;
}

string getValue()
{
	return nullptr;
}

int getStatementNo()
{
	return 0;
}



