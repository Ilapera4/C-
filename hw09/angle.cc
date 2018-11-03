#include "angle.h"
#include <cmath>
#include <iostream>

angle::angle(){
}

angle::angle(double x){
	this->x = x;
}

angle::~angle(){
}

double angle::getAng()const{
	return x;
}

angle angle::operator-(const angle& b)const{
	angle a(0.0);
	a.x = x - b.x;
	if (a.x < 0){
		a.x+=360;
	}
	return(a);
}

angle angle::operator+(const angle& b)const{
	angle a(0.0);
	a.x = x + b.x;
	if(a.x > 360){
		a.x -= 360;
	}
	return(a);
}

double angle::getsin(){
	double ans = sin(x * M_PI/180.0);
	return ans;
}

double angle::getcos(){
	double ans = cos(x * M_PI/180);
}
