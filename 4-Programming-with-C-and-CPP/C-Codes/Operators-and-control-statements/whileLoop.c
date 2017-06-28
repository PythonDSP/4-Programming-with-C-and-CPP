// whileLoop.c
// while loop to print the numbers

#include <stdio.h>

int main(void)
{
    int i=0;

    while(i < 5){
        printf("%d,", i); 
        i = i + 1;
    }

    return 0;
}

/* Outputs
0, 1, 2, 3, 4,
*/