// printfFlag.c

#include <stdio.h>

int main()
{
    int i1 = 210, i2=-15;
    float j1 = -123.34, j2=12.22;
    char c1[] = "Meher", c2[] = "Krishna";

    // 10d : 10 is the minimum width for integer
    // 10.4f : 10 and 4 are minimum width for integer part and float part respectively 
    printf("---------- Right justified ---------- \n");
    printf("%10d %10.4f %10s\n", i1, j1, c1);
    printf("%10d %10.4f %10s\n\n", i2, j2, c2);

    // +10d to add `+ sign' with numeric values
    printf("%+10d %+10.4f %10s\n", i1, j1, c1);
    printf("%+10d %+10.4f %10s\n\n", i2, j2, c2);

    // 0 is used for paddign zeros
    // 0 can not be used with 'left justified'
    printf("%010d %010.4f %10s\n", i1, j1, c1);
    printf("%010d %010.4f %10s\n\n", i2, j2, c2);

    // - for left justified
    printf("---------- Left justified ---------- \n");
    printf("%-10d %-10.4f %-10s\n", i1, j1, c1);
    printf("%-10d %-10.4f %-10s\n\n", i2, j2, c2);

    // - for left justified and then + to add `+ sign' with numeric values
    printf("%-+10d %-+10.4f %-10s\n", i1, j1, c1);
    printf("%-+10d %-+10.4f %-10s\n\n", i2, j2, c2);

    // - for left justified and then 'space' to add `space' for +ve values
    printf("%- 10d %- 10.4f %-10s\n", i1, j1, c1);
    printf("%- 10d %- 10.4f %-10s\n", i2, j2, c2);

    return 0;
}

/* Outputs
---------- Right justified ----------
       210  -123.3400      Meher
       -15    12.2200    Krishna

      +210  -123.3400      Meher
       -15   +12.2200    Krishna

0000000210 -0123.3400      Meher
-000000015 00012.2200    Krishna

---------- Left justified ----------
210        -123.3400  Meher
-15        12.2200    Krishna

+210       -123.3400  Meher
-15        +12.2200   Krishna

 210       -123.3400  Meher
-15         12.2200   Krishna
*/