// printIntFloat.c

#include <stdio.h>

int main()
{
    int i = 10, j = -12;

    float x = 102.3, y=-23.49;

    printf("----- Integer format ----- \n");
    printf("%d, %i, %o, %u, %x \n", i, i, i, i, i);
    // hex and oct : -ve numbers are displayed as "2's complement"
    printf("%d, %i, %o, %x\n\n", j, j, j, j);

    printf("----- Floating point format ----- \n");
    printf("%e, %f, %g \n", x, x, x);
    printf("%e, %f, %g \n", y, y, y);

    // hex and oct : -ve numbers are displayed as "2's complement"
    // printf("%d, %i, %o, %x ", y, y, y, y);

    return 0;
}

/* Outputs
----- Integer format -----
10, 10, 12, 10, a
-12, -12, 37777777764, fffffff4

----- Floating point format -----
1.023000e+002, 102.300003, 102.3
-2.349000e+001, -23.490000, -23.49

*/