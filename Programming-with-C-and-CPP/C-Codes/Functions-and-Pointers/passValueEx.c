// passValueEx.c

#include <stdio.h>

// two seperated functions are required to calculate 
// square and cube, because one function can return only value
int cube (int );
int square (int );

int main(){

    int a = 2;
    int c; // for cube value of a
    int s; // for square value of a

    c = cube(a);
    s = square(a);

    printf("cube of %d = %d\n", a, c);
    printf("square of %d = %d\n", a, s);

    return 0;
}

// return cube value
int cube(int i){
    return i*i*i;
}

// return square value
int square(int i){
    return i*i;
}

/* Outputs
cube of 2  =  8
square of 2  =  4
*/