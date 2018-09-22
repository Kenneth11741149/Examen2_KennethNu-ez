#include "Bombas.h"
#include "Item.h"
Bombas::Bombas():Item(){

}

Bombas::Bombas(int pturnos, int pxcord, int pycord):Item(){
	turnos = pturnos;
	xcord = pxcord;
	ycord = pycord;
}