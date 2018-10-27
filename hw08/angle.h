#ifndef ANGLE_H
#define ANGLE_H

class angle{
	
	private:
		double x; 
		
	public:
		angle(double x);		//Method
		virtual ~angle();		//destructor
		
		double getAng() const;
		const angle& operator+=(const angle& b); //x is the angle
		//and checks at the same time
		const angle& operator-=(const angle& b);
		double getsin();
		double getcos();
	
};
#endif