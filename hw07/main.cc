#include <iostream>
#include "angle.h"

int main(){
	angle a(340.0);
	angle b(45.5);
	angle c;
	
	c=a+b;
	std::cout<<c.x<<std::endl;
	
	c=a-b;
	std::cout<<c.x<<std::endl;
	
	c=a/b;
	std::cout<<c.x<<std::endl;
	
	a = b;
	std::cout<<a.x<<std::endl;
	
	
	bool tru = (a.x == b.x);
	if (tru==0){
		std::cout<<"false ="<<a.x<<", "<<b.x<<std::endl;
	}else{
		std::cout<<"true ="<<a.x<<", "<<b.x<<std::endl;
	}
	bool tru2 = (a.x == c.x);
	if (tru2==0){
		std::cout<<"false ="<<a.x<<", "<<c.x<<std::endl;
	}else{
		std::cout<<"true ="<<a.x<<", "<<c.x<<std::endl;
	}
	
}