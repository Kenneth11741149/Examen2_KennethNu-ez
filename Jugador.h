#ifndef JUGADOR_H
#define JUGADOR_H

#include "Item.h"

class Jugador:public Item{
private:
	string nombre;
	bool vivo;
	bool humano;
	string marca;
	int xcord;
	int ycord;
public:
	Jugador();
	Jugador(string,bool,bool,string,int,int);

	void setVivo(bool pvivo){
		vivo = pvivo;
	}	

	bool getVivo(){
		return vivo;
	}
	void setHumano(bool phumano){
		humano = phumano;
	}

	bool getHumano(){
		return humano;
	}

	void setMarca(string pmarca){
		marca = pmarca;
	}

	string getMarca(){
		return marca;
	}

	~Jugador(){

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

	string toString(){
		return marca;
	}
	
};
#endif