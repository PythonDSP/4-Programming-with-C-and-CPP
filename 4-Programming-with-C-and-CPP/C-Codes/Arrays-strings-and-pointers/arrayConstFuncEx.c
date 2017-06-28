// arrayConstFuncEx.c
// parameter passed as 'const' can not be modified

#include <stdio.h>

// use 'int []' or 'int *' to pass the array
void addArray(const int *, const int);

int main(){

    // array 'a' is initialized with 3 elements; 
    int a[3] = {2, 4, 6}; // array size = 3 (i.e. 0 to 2)
    int b = 2;

    // arrays are always passed by reference
    addArray(a, b); 

    return 0;
}

// arrays are always passed by reference
void addArray(const int *a, const int b){
    int i;
    for (i=0; i<3; i++){
        printf("%d, ", a[i]);

        // below line will generate error as array is  
        // passed with 'const' keyword. 
        // a[i] = a[i] + 1;   
    }

    // similarly b can not be modified 
    // b = 3;
}

/* Output
2, 4, 6,
*/