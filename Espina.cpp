#include "Espina.h"

Espina::Espina():Bombas(){

}

Espina::Espina(int puserbombas,int pturnos, int pxcord, int pycord):Bombas(pturnos,pxcord,pycord){
	userbombas = puserbombas;
}