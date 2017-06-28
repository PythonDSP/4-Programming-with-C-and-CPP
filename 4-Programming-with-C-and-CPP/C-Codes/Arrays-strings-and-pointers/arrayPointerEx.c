// arrayPointerEx.c
// arrays are pointer 

#include <stdio.h>

int main(){
    int x[4] = {2, 4, 6, 8};  // array x of size 4. 

   printf("x : address of x[0] = %p\n", x); // array points to address
   printf("*x : value of x[0] = %d\n", *x); // 2

   printf("x+1 : address of x[1] = %p\n", x+1); // array points to address
   printf("*(x+1) : value of x[1] = %d\n", *(x+1)); // 4
   printf("*x+1 : value of x[0] + 1  = %d\n", *x+1); // x[0] + 1 = 3

   return 0;
}

/* Outputs
x : address of x[0] = 0x22ff00
*x : value of x[0] = 2
x+1 : address of x[1] = 0x22ff04
*(x+1) : value of x[1] = 4
*x+1 : value of x[0] + 1  = 3
*/