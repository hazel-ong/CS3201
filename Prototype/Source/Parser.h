#pragma once

#include "TNode.h"
#include "Parent.h"
#include "Follows.h"
#include "PKB.h"
#include <cctype>

class Parser {

public:
	Parser();

	~Parser();

	int parse(std::string);

	void parseProcedure();

	void parseStatementList();

	void parseStatement(std::string);

	std::vector<std::string> getToken(std::string);

	void getCurrentNode();

	bool IsNAME(const std::string& token);

	
};