#include "QueryParser.h"

using namespace std;

QueryParser::QueryParser()
{
	QueryParser::delimiters = " (,)";
}

QueryParser::~QueryParser()
{

}

void QueryParser::parse(string input)
{
	// Example query to parse:
	// Select s such that Follows (5, s);

	tokenize(input);

	vector<string>::iterator it = tokens.begin();
	while (it != tokens.end())
	{
		cout << (*it) << endl;
		it++;
	}

	// synonyms()

	// conditions()
}

/*
Conditions()
	if nextToken = ;
	...
	if nextToken = such that
	...
	if nextToken = and
	...
	if nextToken = pattern
*/

void QueryParser::tokenize(string input)
{

	char *curToken;
	char *nextToken;
	int len = input.size();
	char *copy = new char[len + 1]; // + 1 for the null character

	// Convert input to a character array 
	// because it is going to be modified by strtok()
	memcpy(copy,			// source
		   input.c_str(),	// destination
		   len);			// number of bytes to copy
	copy[len] = '\0';

	// tokenize copy
	curToken = strtok_s(copy, delimiters.c_str(), &nextToken);
	while (curToken != NULL)
	{
		tokens.push_back(curToken);
		curToken = strtok_s(NULL, delimiters.c_str(), &nextToken);
	}

	delete [] copy;
}

// TODO (David) make case insensitive comparison
void QueryParser::match(string s)
{
	if (nextToken.compare(s) != 0)
	{
		error();
	}
	// Get next token
}

void QueryParser::error()
{
	cout << "Query parsing error" << endl;
	exit(1);
}

