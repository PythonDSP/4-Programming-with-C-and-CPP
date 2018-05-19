// my_header.h

#include <stdio.h> 

void add2Num(int *, int *, int *); // pass by reference
int diff2Num(int, int); // pass by value

 void add2Num (int *a, int *b, int *c){
    *c = *a + *b;
}

int diff2Num(int a, int b){
    return (a-b);
}