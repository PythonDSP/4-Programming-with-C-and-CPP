// reverseOrder.c

#include <stdio.h>

int main(){
    int i;

    for (i=10; i>0; i--)  // loop in reverse direction 
        printf("%d, ", i);
    return 0;
}

/* Outputs
10, 9, 8, 7, 6, 5, 4, 3, 2, 1,
*/