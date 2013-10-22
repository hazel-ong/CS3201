#pragma once

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <iterator>
#include "Parser.h"
#include "PKB.h"
#include "TNode.h"
//#include "ctype.h"

using namespace std;

Parser::Parser()
{

}

Parser::~Parser()
{

}

int Parser::parse(string filename)
{
	parseStatement(filename);

	return 0;
}

void Parser::parseProcedure()
{


}

void Parser::parseStatementList()
{

}

void Parser::parseStatement(string statement)
{	std::vector<std::string> stmtVector = getToken(statement);
	//cout << "Parsing statement: " << statement << endl;
	if(statement.find("Procedure")){
		//procedureFX operations and API called in this
		//procedure name is @ stmtVector[1];
	}else if(statement.find("while")){
		//whileFX operations and API called in this
		//while-loop ctrl variable is @ stmtVector[1];
	}else if(statement.find("if")){
		//ifFX operations and API called in this
		//if-loop ctrl variable is @ stmtVector[1];
	}else if(statement.find("=")){
		//assignFX operations and API called in this
		//modifies(element) is @ stmtVector[0];
		//assign expression is @ stmtVector[2];
	}else{
		cout<< "invalid input, please try again." << endl;
	}
}

vector<string> getToken(string inputStr) 
{
	std::stringstream ss(inputStr);
	istream_iterator<std::string> begin(ss);
	istream_iterator<std::string> end;
	std::vector<std::string> tokenVector(begin, end);
	return tokenVector;
}
 
//int main(){
//	Parser p;
//	string input;
//	while(getline(cin, input))
//		//retrieve the next string of stmt from the input - Melvin
//		p.selectFx(input);
//		//cout<< "Your input is : " <<input << endl;
//	return 0;
//}

bool Parser:: IsNAME(const std :: string& token) //&= pass by reference
{
	int tokenLength = token.length();
	char c;
	c = token[0];
	if(isalpha(c))
	{
		for(int i = 1; i < tokenLength; i++)
		{
			c = token[i];
			if(!(isalpha(c) || isdigit(c)))
				return false;
		}
	}

}
/*bool Parser::IsLETTER(char c) {
        return (c > 64 && c < 91) || (c > 96 && c < 123);       
}
bool Parser::IsDIGIT(char c) {
        return (c > 47 && c < 58);       
}*/