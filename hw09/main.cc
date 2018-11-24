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
	int speed = 10;
	
	log l;
	population fishy;
	for (i = 0; i< 1; i++){
		fish flippy;
		flippy.setTR(tr);
		flippy.setDir(dir);
		flippy.setSpeed(speed);
		flippy.setXY(0, 0);
		std::cout<<"start="<<flippy.posx<<std::endl;
		drunkfish drunk;
		drunk.setTR(tr);
		drunk.setDir(dir);
		drunk.setSpeed(speed);
		drunk.setXY(0, 0);
		
		for (a = 0; a<90; a++){
			flippy.swim();
			drunk.swim();
			std::cout<<"flippy x="<<flippy.posx<<std::endl;
			std::cout<<"drunk x="<<drunk.posx<<std::endl;
			if (flippy.posx > 100.00){
				std::cout<<"flippy fish has died."<<std::endl;
				a = 100;
				
			} else if(drunk.posx >100.00){
				std::cout<<"drunk fish has died."<<std::endl;
				a = 100;
				
			}
		}
	}
	
	
	
	
}