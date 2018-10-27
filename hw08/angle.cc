#include "angle.h"
#include <cmath>
#include <iostream>

angle::angle(double x){
	this->x = x;
}

angle::~angle(){
}

double angle::getAng()const{
	return x;
}

void angle::const angle operator-=(const angle& b){
	this->x = x - b;
}

angle angle::const angle operator+=(const angle& b);
	this->x = x + b;
}

double angle::getsin(){
	double ans = sin(x * M_PI/180.0);
	return ans;
}

double angle::getcos(){
	double ans = cos(x * M_PI/180);
}
