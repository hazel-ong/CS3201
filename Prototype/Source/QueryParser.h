#pragma once

#include <iostream>
#include <string>
#include <string.h>

// container headers
#include <unordered_map>
#include <vector>

class QueryParser 
{

public:
	QueryParser();
	~QueryParser();
	void parse(std::string);

private:
	// private fields
	std::string resultClause;	// the synonym that will contain the result of the query
	std::unordered_map<std::string, std::string> synonymTable; 
	std::vector<std::string> conditions;
	std::vector<std::string> tokens;
	std::string nextToken;
	std::string delimiters;		// the delimiters used to tokenize the strings

	// private methods
	void tokenize(std::string);
	void match(std::string); 
	void error();
};