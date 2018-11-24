#include <iostream>
#include "angle.h"
#include "log.h"
#include "fish.h"
#include "population.h"

int main(){
	int i = 0;
	int a = 0;
	angle dir(45);
	angle tr(15);
	int speed = 5;
	int cnt=0;
	
	log l;
	population fishy;
	for (i = 0; i< 2; i++){
		fish first;
		first.setTR(tr);
		first.setDir(dir);
		first.setSpeed(speed);
		first.setXY(0, 0);
		std::cout<<"start="<<first.posx<<std::endl;
		
		while (first.posx<100){
			first.swim();
			cnt++;
			std::cout<<"current x="<<first.posx<<std::endl;
		}
		std::cout<<"count is "<<cnt<<std::endl;
	}
	
	
	
	
}