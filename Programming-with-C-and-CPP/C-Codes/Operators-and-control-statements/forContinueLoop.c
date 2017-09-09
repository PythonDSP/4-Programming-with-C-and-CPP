// forContinueLoop.c
// print only odd numbers by skipping even numbers

#include <stdio.h>

int main(void)
{
    int i;

    for (i=0; i<10; i++){

        if (i % 2 == 0){
            continue;
        }
        
        printf("%d, ", i); //0, 1, 2, 3, 4,
    }
}

/* Outputs
1, 3, 5, 7, 9,
*/