// forLoop.c
// loops to print numbers

#include <stdio.h>

int main(void)
{
    int i = 0, j = 2;


    // ************** LOOP 1 **************************
    // print 0 to 4
    for (i=0; i<5; i++){
        printf("%d, ", i); //0, 1, 2, 3, 4,
    }

    // value of i is 5
    printf("\n");
    printf("Value of i = %d", i); // Value of i = 5

    // ***************** LOOP 2 ************************
    // 0 to 7
    printf("\n");
    // 'int j' creats a new variable 'j' for the loop
    for (int j=0; j<8; j++){ // note 'int j' is used
        printf("%d, ", j); // 0, 1, 2, 3, 4, 5, 6, 7,
    }

    // value of j is 2 (not 8)
    printf("\n");
    printf("Value of j = %d", j); // Value of j = 2
    return 0;
    // ************************************************
}

/* Outputs
0, 1, 2, 3, 4,
Value of i = 5
0, 1, 2, 3, 4, 5, 6, 7,
Value of j = 2
*/