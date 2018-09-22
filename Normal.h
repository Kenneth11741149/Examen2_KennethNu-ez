#ifndef NORMAL_H
#define NORMAL_H

#include "Bombas.h"
class Normal: public Bombas{
	int alcance;
public:
	Normal();
	Normal(int,int,int,int);

	void setAlcance(int palcance){
		alcance = palcance;
	}

	int getAlcance(){
		return alcance;
	}

	~Normal(){

	}

	string toString(){
		return "@";
	}
	
};
#endif