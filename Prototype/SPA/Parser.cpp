#pragma once

#include<stdio.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
 
class Parser{
public:
	Parser(){
		
	}
	//Skeleton for the parser class excluing the assisng, while, if ,call
	void assignFx(){
		//Type your code here
	}
	void whileFx(){
		//Type your code here
	}
	void ifFx(){
		//Type your code here
	}
	void callFx(){
		//Type your code here
	}
	void procFx(string procName){
		//Type your code here
	}

	void selectFx(string input){
		if(input.find("Procedure")){
		}else if(input.find("while")){
			whileFx();
		}else if(input.find("if")){
			ifFx();
		}else if(input.find('=')){
			assignFx();
		}else{
			cout << "Invalid input, please try again." <<endl;
		}
	}
	//tokenize the input string into separate tokens - Melvin
	void getToken(string input){
		string token;
		istringstream iss (input);
		while(iss>>token){
			//do whather you want with the tokens
		}
		
	}

	void getCurrentNode(){
		//Type your code here
	}
};

int main(){
	Parser p;
	string input;
	while(getline(cin, input))
		//retrieve the next string of stmt from the input - Melvin
		p.selectFx(input);
		//cout<< "Your input is : " <<input << endl;
	return 0;
}