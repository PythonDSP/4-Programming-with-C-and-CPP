// doWhileLoop.c
// do-while loop to print the numbers

#include <stdio.h>

int main(void)
{
    int i=0;

    do{
        printf("%d, ", i); 
        i = i + 1;
    }while(i < 5);

    return 0;
}

/* Outputs
0, 1, 2, 3, 4,
*/