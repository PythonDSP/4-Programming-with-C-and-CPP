// scanfEx.c

#include <stdio.h>

int main()
{
    int a, b, c, d;
    unsigned int e; // for hexadecimal values (int will give warning)
    
    // %d can not read Oct and Hex values
    // %i can read Oct and Hex values
    printf("Enter 5 numbers numbers : \n");
    scanf("%d%i%i%i%x", &a, &b, &c, &d, &e);

    printf("Outputs\n");
    printf("%d %d %d %d %d", a, b, c, d, e);
    return 0;
}

/* Outputs
Enter 5 numbers numbers :
-12 -12 014 0xc 0xc         014 : Oct input; 0xc : Hex input
Outputs
-12 -12 12 12 12
*/