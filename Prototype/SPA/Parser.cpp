#include "Parser.h"

using std::cout;

Parser::Parser()
{

}

Parser::~Parser()
{

}

void Parser::parse(string filename)
{

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
