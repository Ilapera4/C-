#include "angle.h"
#include <cmath>

angle::angle(){
}

angle::angle(double x){
	this->x = x;
}

angle::~angle(){
}

angle angle::operator+(const angle& b)const{
	angle a(0.0);
	a.x = x + b.x;
	if(a.x > 360){
		a.x -= 360;
	}
	return(a);
}

angle angle::operator-(const angle& b)const{
	angle a;
	a.x = x - b.x;
	if(a.x < 0){
		a.x += 360;
	}
	return(a);
}

angle angle::operator/(const angle& b)const{
	angle a;
	a.x = x/b.x;
	return(a);
}

void angle::operator = (const angle &b){
	this->x = b.x;
}

bool angle::operator == (const angle &b){
	bool ans;
	if (this->x == b.x){
		ans = true;
	}else{
		ans = false;
	}
	return ans;
}

void angle::operator += (const angle &b){
	x += b.x;
}

void angle::operator -= (const angle &b){
	x -= b.x;
}

double angle::getSin(){
	double ans;
	ans = sin(x*M_PI/180.0);
	return(ans);
}

double angle::getCos(){
	double ans;
	ans = cos(x*M_PI/180.0);
	return (ans);
}