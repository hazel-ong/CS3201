#pragma once

#include "TNode.h"
#include "Parent.h"
#include "Follows.h"
#include "PKB.h"

class Parser {

public:
	Parser();

	~Parser();

	int parse(std::string);

	void parseProcedure();

	void parseStatementList();

	void parseStatement(std::string);

	void getToken(std::string);

	void getCurrentNode();

};