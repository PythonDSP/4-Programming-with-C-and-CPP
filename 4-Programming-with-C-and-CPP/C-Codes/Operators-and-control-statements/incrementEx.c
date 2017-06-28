// incrementEx.c

#include <stdio.h>

int main(void)
{
    int i = 1; 

    printf("i = %d\n\n", i);  // 1

    // print first, then increment
    printf("i++ = %d (i.e. access first and then increment): \n", i++); // 1
    printf("i = %d\n\n", i); // 2 (i.e. i is incremented by above statement)

    // increment first, then print
    printf("++i = %d (i.e. increment first and then access):\n", ++i); // 3
    printf("i = %d\n", i); // 3

    return 0;
}

/* Outputs
i = 1

i++ = 1 (i.e. access first and then increment):
i = 2

++i = 3 (i.e. increment first and then access):
i = 3
*/