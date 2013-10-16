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

	void parse(string);

	void parseProcedure();

	void parseStatementList();

	void parseStatement(string);

	void getToken(string);

	void getCurrentNode();
};