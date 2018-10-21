#include <cstdio>
#include "angle.h"

int main(){
	angle a = new angle(90.0);
	double newAng = a.sub(40);
	printf("Angle is %d", newAng);
	
}