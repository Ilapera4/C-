#include <cstdio>
#include "readPPM.h"
#include "isPPm.h"


int main(){
	int width;
	int height;
	int value;
	FILE* fp = fopen("test.ppm", "r");
	int tru = isPPM(fp);		//tests if file is a PPM file
	//printf("%d\n", tru);     /* 1 is a PPM file, 0 isn't */
	if(tru!=1){
		printf("Not a PPM file");
	}
	fscanf(fp, "%d", &height);
	fscanf(fp, "%d", &width);
	fscanf(fp, "%d", &value);
	printf("%d %d\n", height, width);
	printf("%d\n", value);
	int length = height*width*3;
	int count;
	unsigned char* data= readPPM(fp, length);
	for (int i = 0; i < 3; i++){
		printf("%c\n", data[i]);
	}
	
	/*unsigned char** byte = new unsigned char*[height];
	byte[0] = new unsigned char[length];
	for (int i = 1; i<height; i+=3){
		
		byte[i] = data[i-1];
		
	}*/
	unsigned char jpg[length];
	jpg = data;
	
	
	fclose(fp);
	
}