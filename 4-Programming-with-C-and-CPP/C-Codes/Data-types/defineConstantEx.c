//defineConstantEx.c

#include <stdio.h>
#include <math.h>

#define pi 3.14
#define blog "PythonDSP"

int main(void)
{
    const int radius=2;
    float area;

    area = pi * pow(radius, 2); // pow(2, 3) = 2*2*2
    printf("Area of circle = %f\n", area);

    printf("Blog name: %s", blog);

    // pi = 3; // error as constant can not be modified
    // radius = 3; // error as constant can not be modified
    return 0;
}

/* Outputs
Area of circle = 12.560000
Blog name: PythonDSP */