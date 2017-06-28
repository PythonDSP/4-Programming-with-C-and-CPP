// ElseIfEx.c
// print message based on grades...

#include <stdio.h>

int main(void)
{
    char grade;

    printf("Enter the grade - A, B, C or D: \t");
    scanf(" %c", &grade);  // get the value from user

    // if grade is A or a
    if (grade == 'A' || grade == 'a')   // logical operator
        printf("Excellent Student");
    else if ((grade == 'B') | (grade == 'b'))   // bitwise operator
        printf("Very Good Student");
    else if (grade == 'C' or grade == 'c')  // logical 'or' operator
        printf("Good Student");
    else if (grade == 'D' or grade == 'd')   // or is C++ feature (not C)
        printf("Need improvements");
    else
        printf("Invalid grade");

    return 0;
}

/* Outputs
Enter the grade - A, B, C or D:     b
Very Good Student
*/