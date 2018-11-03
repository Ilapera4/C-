#include "fish.h"
#include "angle.h"
#include <cstdlib>
#include <iostream>

fish::fish(){
}

fish::fish(double x, double y, double s, angle dir, angle tr){
	posx = x;
	posy = y;
	speed = s;
	this->dir = dir;
	turn_rate = tr;
}

fish::~fish(){
}

void fish::swim(){
	int choice = rand() % 3;
	
	if( choice == 0) dir -= turn_rate;
	else if(choice == 2) dir += turn_rate;
	
	x += speed * dir.getCos();
	y += speed * dir.getSin();
}

fish& fish::operator+=(const fish& rhs){
	
	this->dir += rhs.turn_rate;
	return *this;
	
}

fish& fish::operator-=(const fish& rhs){
	
	this->dir -= rhs.turn_rate;
	return *this;
	
}