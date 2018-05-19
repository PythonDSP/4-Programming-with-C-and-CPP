// pointerEx.c
// define and use pointers

#include <stdio.h>

int main(){
    int x = 2;  // variable declaration 
    int *y;    // declaration - pointer variable 

    y = &x;    // store address of variable x

    // following lines will generate error
    // as values can not be assigned to pointers
    // y = 2; 
    // y = x;

    printf("x =  %d\n", x); // value of x
    printf("&x = %p\n", &x); // &x = address of x
    printf("y =  %p\n", y); // y = address of x  (print in pointer-address)
    printf("*y = %d\n", *y);  // *y = value store at address y = value of x

    return 0;
}

/* Outputs
x =  2
&x = 0022ff18
y =  0022ff18
*y = 2
*/