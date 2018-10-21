#include <cstdio>

int main() {
		int num;
		int value = 0;
		FILE* fp=fopen("file.txt", "r");
		
		fscanf(fp,"%d", &value);
		fclose(fp);
		FILE* fw=fopen("file.txt", "w");
			
		printf("This program ran %d times\n", value);
		value++;
		printf("Is now %d\n", value);
			
		fprintf(fw, "%d", value);
			
		
		fclose(fw);
		
}