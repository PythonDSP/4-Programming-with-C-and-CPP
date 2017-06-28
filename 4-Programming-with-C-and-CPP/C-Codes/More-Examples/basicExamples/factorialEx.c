// factorialEx.c

#include <stdio.h>

int main(){
    int i, num, factorial = 1, flag = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    if (num <= 0){
        flag = 1;
        printf("Number should be greater than 0.");
    }
    else{
        for (i=1; i<=num; i++)
            factorial *= i;  // factorial = factorial * i;
    }

    if (flag != 1)
        printf("Factorial = %d",  factorial);

    return 0;
}

/* Outputs
Enter the number : 4
Factorial = 24
*/