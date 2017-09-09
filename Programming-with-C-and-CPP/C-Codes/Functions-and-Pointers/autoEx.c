// autoEx.c
// scope of automatic variables

#include <stdio.h>

int main(){

    int x=2;
    printf("x = %d\n", x);

    {   // y is not available outside the bracket i.e.
        // scope is limited to  block
        int y=2;
        printf("y = %d\n", y);
    }

    int z; // uninitialized, garbage value will be stored in it

    printf("printed at the end: x = %d\n", x);
    
    // // error y is not available here
    // printf("printed from outer block: y = %d\n", y); 
    
    printf("z = %d\n", z);

    return 0;
}

/* Outputs
x = 2
y = 2
printed at the end: x = 2
z = 2893592
*/