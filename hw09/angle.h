#ifndef ANGLE_H
#define ANGLE_H

class angle{
	
	private:
		
		
	public:
		double x; 
		
		angle();
		angle(double x);		//Method
		virtual ~angle();		//destructor
		
		angle operator+(const angle& b)const;
		angle operator-(const angle& b)const;
		angle operator/(const angle& b)const;
		void operator = (const angle &b);
		bool operator == (const angle &b);
		void operator += (const angle &b);
		void operator -= (const angle &b);
		
		double getSin();
		double getCos();
		
	
};
#endif