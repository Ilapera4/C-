#include <cstdio>
#include "function.h"

int main(){
	int a = 3;
	int b = 1;
	printf("a = %d, and b = %d\n", a, b);
	swap(&a, &b);
	printf("a = %d, and b = %d\n", a, b);
	
}