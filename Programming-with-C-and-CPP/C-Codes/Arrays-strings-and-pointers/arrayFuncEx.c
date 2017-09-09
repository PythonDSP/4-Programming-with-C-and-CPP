// arrayFuncEx.c
// arrays are always passed by reference

#include <stdio.h>

// use 'int []' or 'int *' to pass the array
void addArray(int [], int);

int main(){

    // array 'a' is initialized with 3 elements; 
    // rest will be filled with zero.
    int a[9] = {2, 4, 6}; // array size = 9 (i.e. 0 to 8)
    int addValue = 4; // value to add with array-elements

    printf("Initial values in array\n"); 
    for(int i=0; i<9; i++)
        printf("%d, ", a[i]);

    printf("\n\n"); // print two blank lines

    // arrays are always passed by reference
    addArray(a, addValue); 

    printf("Final values in array\n"); 
    for(int i=0; i<9; i++)
        printf("%d, ", a[i]);

    return 0;
}

// arrays are always passed by reference
void addArray(int b[], int value){
    for (int i=0; i<9; i++)
        b[i] = b[i] + value;
}

/* Output
Initial values in array
2, 4, 6, 0, 0, 0, 0, 0, 0,

Final values in array
6, 8, 10, 4, 4, 4, 4, 4, 4,
*/