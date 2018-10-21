#include <cstdio>
#include "isPPM.h"


int isPPM(FILE* file){
	int gd = 0;
	char string[2];
	fscanf(file, "%s",string);
	printf("%s\n", string);
	if(string[0] = 'p'){
		if(string[1] = '6'){
			gd = 1;
		}
		
	}
	
	return gd;
}