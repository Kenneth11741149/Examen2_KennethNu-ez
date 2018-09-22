#ifndef OBSTACULO_H
#define OBSTACULO_H

#include  "Item.h"
class Obstaculo:public Item{
private:
	string marca;
public:
	Obstaculo();
	Obstaculo(string);
	~Obstaculo(){

	}
	string toString(){
		return marca;
	}
	
};
#endif