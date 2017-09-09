// ifElifElse.c
// Nested if-else statement to check the divisibility with 2 and 3.

#include <stdio.h>

int main(void)
{
    int x=4;

    if (x % 2 == 0){
        if(x % 3 == 0){
            printf("Number is divisible by 2 and 3.");
        }
        else{  
            printf("Number is divisible by 2 only\n");
            printf("x%%3 = %d\n", x%3);  // note : two %% are used to print '%'
        }
    }
    else if (x % 3 == 0){
        printf("Number is divisible by 3 only.");
    }
    else{
        printf("Number is not divisible by 2 and 3\n");
        printf("x%%2 = %d\n", x%2);
        printf("x%%3 = %d\n", x%3);
    }

    return 0;
}

/* Outputs
Number is divisible by 2 only
x%3 = 1
*/