#ifndef ANGLE_H
#define ANGLE_H

class angle{
		
	public:
		double x;
		angle();
		angle(double x);		//Method
		virtual ~angle();		//destructor
		
		double getAng() const;
		angle operator+(const angle& b)const; //x is the angle
		//and checks at the same time
		angle operator-(const angle& b)const;
		double getsin();
		double getcos();
	
};
#endif