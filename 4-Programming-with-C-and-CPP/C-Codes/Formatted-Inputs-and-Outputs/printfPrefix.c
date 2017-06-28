// printfPrefix.c

#include <stdio.h>

int main()
{
    int i1=10;

    // # to print '0x' and '0' before hex and oct numbers respectively
    printf("---------- Right justified ---------- \n");
    printf("%10d %10x %10o\n", i1, i1, i1);
    printf("%10d %#10x %#10o\n\n", i1, i1, i1);

    printf("---------- Left justified ---------- \n");
    printf("%-10d %-10x %-10o\n", i1, i1, i1);
    printf("%-10d %-#10x %-#10o\n\n", i1, i1, i1);

    return 0;
}

/* Outputs
---------- Right justified ----------
        10          a         12
        10        0xa        012

---------- Left justified ----------
10         a          12
10         0xa        012
*/