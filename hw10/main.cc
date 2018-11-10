#include <iostream>
#include "angle.h"
#include "log.h"

int main(){
	log def;
	def.logP("hello");
	angle a(360);
	std::cout<<"angle a is "<<a.x<<std::endl;
	angle b(40);
	std::cout<<"angle b is "<<b.x<<std::endl;
	angle c;
	c=a+b;
	std::cout<<"new angle is "<<c.x<<std::endl;
	
}