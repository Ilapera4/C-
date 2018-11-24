#ifndef FISH_H
#define FISH_H
#include <string>
#include "angle.h"
class population;

class fish{
	
	private:
		population* popref;
		
	
	public:
		fish();
		fish(population fishy);
		virtual ~fish();
	
		angle tr;
		angle dir;
		double speed;
		double posx;
		double posy;
	
		void setTR(const angle &b);
		void setDir(const angle &b);
		void setSpeed(const double s);
		void setXY(const double x, const double y);
		void swim();
	
	
};
#endif