// passValueEx.c
// pass by reference and pass by value together

#include <stdio.h>

// by using pass-by-reference, multiple value can be retrieved from same function
void cube_square(int *, int *, int);

int main(){

    int a = 2;
    int c; // for cube value of a
    int s; // for square value of a

    // note that a is passed by value 
    // whereas c and s are passed by reference
    cube_square(&c, &s,  a); // pass by reference &c and &s

    printf("cube of %d = %d\n", a, c);
    printf("square of %d = %d\n", a, s);

    return 0;
}

void cube_square(int *j, int *k, int i){
    *j = i*i*i;
    *k = i*i;
}

/* Outputs
cube of 2  =  8
square of 2  =  4
*/