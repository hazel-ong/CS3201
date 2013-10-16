#pragma once

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

#include "Parser.h"
#include "PKB.h"
#include "TNode.h"

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
{
	cout << "Parsing statement: " << statement << endl;

	/*if (input.find("Procedure")) {
	}else if(input.find("while")){
	whileFx();
	}else if(input.find("if")){
	ifFx();
	}else if(input.find('=')){
	assignFx();
	}else{
	cout << "Invalid input, please try again." <<endl;
	}*/
}

void getToken(string input) 
{
	string token;

	while (cin >> token)
	{
		// Do whather you want with the tokens
	}
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