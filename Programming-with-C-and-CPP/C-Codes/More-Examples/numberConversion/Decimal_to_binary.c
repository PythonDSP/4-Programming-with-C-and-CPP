// Decimal_to_binary.c

#include <stdio.h> 

void Decimal_to_binary(int *, int *);

// // function to convert decimal number to binary
void Decimal_to_binary(int *decimal_val, int *binary_val){
//      usage : 
//             int binary_val, decimal_val;
//             Decimal_to_binary(&decimal_val, &binary_val);
        
//             binary_val = binary input from user
//             decimal_val = decimal output from the function 

    int num, rem, base = 1;

    num = *decimal_val;
    *binary_val = 0; 

    while (num > 0){
        rem = num % 2;
        *binary_val = *binary_val + rem * base;
        num = num / 2;
        base = base * 10;
    }

    // printf("Input number is = %d\n", *decimal_val);
    printf("Binary number = %d\n", *binary_val);
}

int main(){

    int decimal_val, binary_val;

    printf("Enter a decimal integer : ");
    scanf("%d", &decimal_val);

    Decimal_to_binary(&decimal_val, &binary_val);

    return 0;
}

/* Outputs
Enter a decimal integer : 15
Binary number = 1111
*/