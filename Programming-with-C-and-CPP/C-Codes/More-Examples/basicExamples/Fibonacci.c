// Fibonacci.c

#include <stdio.h>

int main(){
    int limit;
    int num1 = 0, num2 = 1, temp;

    // print Fibonacci series upto limit
    printf("Enter the limit for series : ");
    scanf("%d", &limit);

    // print Fibonacci series
    printf("%d, %d, ", num1, num2);
    for (;;){       // infinite loop
        temp = num1;
        num1 = num2; 
        num2 = num1 + temp;

        if (num2 <= limit)
            printf("%d, ", num2);
        else 
            break;
    }
    return 0;
}

/* Outputs
Enter the limit for series : 50
0, 1, 1, 2, 3, 5, 8, 13, 21, 34,
*/