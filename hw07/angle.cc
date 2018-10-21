#include angle.h

angle::angle(double x){
	this->x = x;
}

angle::~angle(){
}

double angle::getAng()const{
	return x;
}

double angle::add(double x, const double y){
	double z = x+y;
	if(z>360){
		z -=360;
	}else if(z<360){
		z+=360;
}
	return z;
}
double angle::sub(const double y){
	double z = angle operator-(const angle& y);
	if(z>360){
		z -=360;
	}else if(z<360){
		z+=360;
}
