#ifndef FISH_H
#define FISH_H
#include "angle.h"
#include <cstdlib>

class fish{
		
	public:
	    fish();
		fish(double x, double y, double s, angle dir, angle tr); /*posx, posy, speed, direction*/
		virtual ~fish();
	
		double posx;
		double posy;
		double speed;
		angle dir;
		angle turn_rate;
		
		void swim();
		fish& operator+=(const fish& rhs);
		fish& operator-=(const fish& rhs);
	
};
#endif