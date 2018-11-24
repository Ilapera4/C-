#include "fish.h"
#include "population.h"
#include "angle.h"
#include <iostream>
#include <cstdlib>
/*

Make sure to add text file of what needs to be regraded

*/
fish::fish(){							//constructor
	
}

fish::fish(population fishy){
	fish a;
	fishy.add(&a);
	popref = &fishy;
}

fish::~fish(){							//destructor
}

void fish::setTR(const angle &b){
	tr = b;
}

void fish::setDir(const angle &b){
	dir = b;
}

void fish::setSpeed(const double s){
	speed = s;
}

void fish::setXY(const double x, const double y){
	posx = x;
	std::cout<<"x is "<<posx<<std::endl;
	posy = y;
	std::cout<<"y is "<<posy<<std::endl;
}

void fish::swim(){
	int choice = rand() % 3;
	if( choice == 0) dir -= tr;
	else if(choice == 2) dir += tr;
	posx += speed * dir.getCos();
	posy += speed * dir.getSin();
}