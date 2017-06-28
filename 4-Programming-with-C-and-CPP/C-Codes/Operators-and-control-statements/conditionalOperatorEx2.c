// conditionalOperatorEx2.c

#include <stdio.h>

int main(void)
{
    int a;

    const char *result; 

    printf("Enter a number:  ");
    scanf("%d", &a); 

    result = (a % 2 == 0 ) ? "number is divisible by 2" :
             (a % 3 == 0) ? "number is divisible by 3" :
             (a % 5 == 0) ? "Number is divisible by 5" : 
             "number is not divisible with 2, 3 and 5";

    printf(result);

    return 0;
}

/* Outputs
Enter a number:  9
number is divisible by 3

Enter a number:  29
number is not divisible with 2, 3 and 5
*/