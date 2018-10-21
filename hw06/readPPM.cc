#include <cstdio>
#include "readPPM.h"

unsigned char* readPPM(FILE* file, int length){
	unsigned char* data = new unsigned char[length];	//flat array
	fread(&data, sizeof(unsigned char), 3, file);
	
	return data;
	
}