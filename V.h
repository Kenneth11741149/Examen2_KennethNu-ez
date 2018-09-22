#ifndef V_H
#define V_H

#include "Bombas.h"


class V:public Bombas{

private:

public:
	V();
	V(int,int,int);
	~V(){

	}
	string toString(){
		return "V";
	}
	
};
#endif