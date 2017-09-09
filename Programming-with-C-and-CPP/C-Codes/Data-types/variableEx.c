// variableEx.c

#include <stdio.h>

int main(){
    
	int x, z; 
	float y;

	x = 2;
	y = 2.7;
	z = x + y; // z = 4 (not 4.7 because z has type integer)

	printf("z = %d", z);
}

/* Outputs
z = 4 */