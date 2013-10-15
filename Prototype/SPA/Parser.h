#pragma once

#include "ASTNode.h"
#include "Parent.h"
#include "Follows.h"
#include "PKB.h"
#include "TNode.h"

class Parser {

public:
	Parser();

	~Parser();

	void parse(string filename);

	void parseProcedure();

	void parseStatementList();

	void parseStatement(string statement);

};