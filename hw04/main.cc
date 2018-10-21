#include <cstdio>
#include "isPPm.h"


int main(){
	int width;
	int height;
	int value= 255;
	FILE* fp = fopen("test.ppm", "r");
	int tru = isPPM(fp);
	printf("%d\n", tru);
	if(tru!=1){
		printf("Not a PPM file");
	}
	fscanf(fp, "%d", &height);
	fscanf(fp, "%d", &width);
	printf("%d %d\n", height, width);
	printf("%d\n", value);
	int length = height*width;
	unsigned char data[length];
	for(int i =0; i<length;i++){ 
		fscanf(fp, "%s", data);
	}
	printf("%s\n", data);
}