#ifndef ESPINA_H
#define ESPINA_H
#include "Bombas.h"

class Espina:public Bombas{
private:
	int userbombas;
public:
	Espina();
	Espina(int,int,int,int);
	void setUserbombas(int puserbombas){
		userbombas = puserbombas;
	}

	int getUserbombas(){
		return userbombas;
	}

	~Espina(){

	}


	string toString(){
		return "Espina";
	}
	
};
#endif