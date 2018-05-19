// functionEx.c
// defining and using functions to add numbers

#include <stdio.h>

// function prototype
float add2Num(int, float);  // use this or below line


// function definition
float add2Num(int a, float b){
    float c;
    c =  a + b;
    return c;
}

int main(){
    int x=2;
    float y=3.5, z;
    //function call
    z = add2Num(x, y); 

    printf("z = %f\n", z);  // z = 5
}

/* Outputs
z = 5.500000
 */