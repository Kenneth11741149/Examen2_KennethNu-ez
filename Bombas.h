#ifndef BOMBAS_H
#define BOMBAS_H

#include "Item.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <sstream>
using std::stringstream;

#include <string>
using std::string;

#include <vector>
using std::vector;

class Bombas:public Item{
private:
protected:
	int turnos;
	int xcord;
	int ycord;
public:
	Bombas();
	Bombas(int,int,int);

	void setTurnos(int pturnos){
		turnos = pturnos;
	}
	int getTurnoos(){
		return turnos;
	}

	void setXcord(int pxcord){
		xcord = pxcord;
	}

	int getXcord(){
		return xcord;
	}

	void setYcord(int pycord){
		ycord = pycord;
	}

	int getYcord(){
		return ycord;
	}

	~Bombas(){

	}
	
	
};

#endif