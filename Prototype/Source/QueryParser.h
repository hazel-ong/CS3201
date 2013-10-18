#pragma once

#include "TNode.h"
#include <iostream>

// QueryParser parses PQL into query tree for processing by QueryEvaluator
class QueryParser {

public:
	QueryParser();

	~QueryParser();

	TNode parse(std::string);

private:

};