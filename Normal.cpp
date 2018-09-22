#include "Normal.h"

Normal::Normal():Bombas(){

}
Normal::Normal(int palcance,int pturnos, int pxcord, int pycord):Bombas(pturnos, pxcord, pycord){
	alcance = palcance;
}	