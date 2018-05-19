// passRefFunc.c
// pass parameters by reference 

#include <stdio.h>

void swap (int *, int *);  // * for pass by reference

int main(){

    int x=2, y=5;
    printf("x = %d, y = %d\n", x, y); // x = 2, y = 5

    swap(&x, &y);  // pass the address, instead of value
    printf("x = %d, y = %d\n", x, y); // x = 5, y = 2

    return 0;
}

// nothing is returned, as changes are made in address directly. 
void swap(int *i , int *j){
    int temp;
    temp = *i; // store value of i in temp variable
    *i = *j; // store value of j in i
    *j = temp; // finally store value of i (i.e. temp) in j 
}