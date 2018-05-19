// ifEx.c
// checks whether number is even or odd...

#include <stdio.h>

int main(void) 
{
    int x=3;

    // check if number is even
    if(x % 2 == 0){
        printf("Number is even.");
        printf("Thank you...");
    }

    // check if number is odd
    if(x % 2 != 0){
        printf("Number is odd.");
        printf("Thank you...");
    }

    return 0;
}

/* Outputs
Number is odd.
Thank you...
*/