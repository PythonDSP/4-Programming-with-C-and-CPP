// main1.c

#include <stdio.h>
#include "my_constants.c"
#include "my_header.h"

int main(){

    int sum_array; // store sum of elements in global_array[]

    int num1=4, num2=1; 
    int sum, diff;

    printf("value of PI = %f\n", PI);

    for (int i =0; i<3; i++)
        sum_array += global_array[i];
    printf("sum_array = %d\n", sum_array); 
    
    add2Num(&num1, &num2, &sum); // pass by reference
    printf("sum = %d\n", sum); 
    
    diff = diff2Num(num1, num2); // pass by value
    printf("difference = %d\n", diff); 
}
