// globalEx.c
#include <stdio.h>

// global variable
int g;

int g_incFunc(int);
int e_incFunc(int);

int g_incFunc(int i){ // increment value of g
    g = g + i; // g is accessed in incFunc
    return g;
}

int e_incFunc(int i){  // increment value of `e'
    // extern keyword must be used if global varialbe is not at the top or in other file
    extern int e; 
    e = e + i; // g is accessed in incFunc
    return e;
}

int main(){

    // extern keyword must be used if global varialbe is not at the top or in other file
    extern int e;  
    int increment_value = 1;
    int g_inc, e_inc;
    
    for(int j=0; j<5; j++){
        g_inc = g_incFunc(increment_value);
        e_inc = e_incFunc(increment_value);
    }

    printf(" g = %d\n", g); // g is accessed in main()
    printf(" g_inc = %d\n", g_inc); 
    
    printf(" e = %d\n", e); // e is accessed in main()
    printf(" e_inc = %d\n", e_inc);

    return 0;
}

// global variable at the end.
int e = 2;

/* Outputs
 g = 5
 g_inc = 5
 e = 7
 e_inc = 7
 */