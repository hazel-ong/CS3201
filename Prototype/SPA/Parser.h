#pragma once

#include "ASTNode.h"
#include "Parent.h"
#include "Follows.h"


class Parser{
public:
	Parser(void);	// constructor
	~Parser(void);	// destructor

	void assignFx(){

	}
	void whileFx(){

	}
	void ifFx(){

	}
	void callFx(){

	}

	//retrieve the next string of stmt from the input - Melvin
	void getToken(){

	}

	ASTNode getCurrentNode(){

	}

	void parse(string filename) {

	}


};