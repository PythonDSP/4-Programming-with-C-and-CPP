// main-to-split.c

#include <stdio.h>

#define PI 3.14   // constant 
int global_array[] = {2, 4, 6};  // global array

void add2Num(int *, int *, int *); // pass by reference
 int diff2Num(int, int); // pass by value

int main(){

    int sum_array; // store sum of elements in global_array[]

    int num1=4, num2=1;
    int sum, diff;

    printf("value of PI = %f\n", PI);

    for (int i=0; i<3; i++)  // loop to find sum of global_array
        sum_array += global_array[i];
    printf("sum_array = %d\n", sum_array);

    // add two numbers
    add2Num(&num1, &num2, &sum); // pass by reference
    printf("sum = %d\n", sum);

    // subtract two numbers
    diff = diff2Num(num1, num2); // pass by value
    printf("difference = %d\n", diff);
}

// pass by reference
void add2Num (int *a, int *b, int *c){
    *c = *a + *b;
}

// pass by value
int diff2Num(int a, int b){
    return (a-b);
}
