#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "PKB.h"
#include "TNode.h"

class Parser{
public:
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
	
	//retrieve the next string of stmt from the input - Melvin
	void getToken(){
		//Type your code here
	}

	TNode getCurrentNode(){
		//Type your code here
	}

	void parse(string filename) {
		cout << "hello " << filename;
	}
};
