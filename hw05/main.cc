#include <cstdio>
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
	unsigned char* data = new unsigned char[length];	//flat array
	for(int i =0; i<=length;i++){ 
		fread(&data[i], sizeof(unsigned char), 3, fp);
		//fscanf(fp, "%c", data);
		printf("%s", data);
		count++;
		if (count == width){
			printf("\n");
			count = 0;
		}
	}
	int** byte = new int*[height];
	byte[0] = new int[length];
	for (int i = 1; i<height; ++i){
		
		byte[i] = data[i-1]+width;
		
	}
	
	
	fclose(fp);
	
}