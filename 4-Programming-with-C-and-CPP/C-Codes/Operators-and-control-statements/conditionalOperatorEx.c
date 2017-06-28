// conditionalOperatorEx.c
// check even and odd number

#include <stdio.h>

int main(void)
{
    int a;
    const char *result;  // character array

    printf("Enter a number:  ");
    scanf("%d", &a); 

    result = (a%2 == 0 ) ? "even" : "odd";

    printf("number is %s", result);

    return 0;
}

/* Outputs
Enter a number:  4
number is even
*/