#ifndef ITEM_H
#define ITEM_H

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

class Item{
private:
public:
	Item();
	~Item(){

	}
	virtual string toString(){
		return "X";
	}
	
};
#endif