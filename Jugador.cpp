#include "Jugador.h"


Jugador::Jugador():Item(){

}
Jugador::Jugador(string pnombre, bool pvivo, bool phumano, string pmarca,int pxcord, int pycord):Item(){
		nombre = pnombre;
		vivo = pvivo;
		humano = phumano;
		marca = pmarca;
		xcord = pxcord;
		ycord = pycord;
}