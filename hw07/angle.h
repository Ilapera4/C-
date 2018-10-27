#ifndef ANGLE_H
#define ANGLE_H

class Angle{
	
	private:
		double x; 
		
	public:
		Angle(double x);		//Method
		virtual ~Angle();		//destructor
		
		double getAng() const;
		double add(double x, const double y); //x is the angle
		//and checks at the same time
		double sub(const double y);
		double getsin(const double ang);
		double getcos(const double ang);
	
};