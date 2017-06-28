// Binary_to_Decimal.c

#include <stdio.h> 

void Binary_to_Decimal(int *, int *);

// function to convert binary number to decimal
void Binary_to_Decimal(int *binary_val, int *decimal_val){
    /* usage : 
            int binary_val, decimal_val;
            Binary_to_Decimal(&binary_val, &decimal_val);
        
            binary_val = binary input from user
            decimal_val = decimal output from the function 
    */

    int num, flag = 0, rem, base = 1;
    *decimal_val = 0;

    num = *binary_val;
    while (num > 0){
        rem = num % 10;
        
        if ((rem != 0) && (rem != 1)){
            printf("Enter the correct binary number...\n");
            flag = 1;
            break; 
        }
        
        *decimal_val = *decimal_val + rem * base;
        num = num / 10 ;
        base = base * 2;
    }

    if (flag == 0)
        printf("Decimal number = %d \n", *decimal_val);
}

int main(){

    int binary_val, decimal_val; 

    printf("Enter a binary number i.e. 1 and 0 only :  ");
    scanf("%d", &binary_val); /* maximum five digits */

    Binary_to_Decimal(&binary_val, &decimal_val);
       
    return 0;
}

/* Outputs
Enter a binary number i.e. 1 and 0 only :  1000
Decimal number = 8
*/