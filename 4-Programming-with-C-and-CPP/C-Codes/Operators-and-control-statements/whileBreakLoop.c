// whileBreakLoop.c
// exit the loop using 'break' statement

#include <stdio.h>

int main(void)
{
    int i=0;

    while(i < 10){
        printf("%d,", i); 
        i = i + 1;

        if (i % 7 == 0){
            break;
        }
    }

    return 0;
}

/* Outputs
0, 1, 2, 3, 4, 5, 6,
*/