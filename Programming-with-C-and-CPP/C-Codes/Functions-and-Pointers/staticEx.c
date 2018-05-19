// staticEx.c
// scope of static-variables

#include <stdio.h>

int incFunc(int);
int staticIncFunc(int);

// increment function with auto-variable j;
int incFunc(int i){
    // j is initialize as 0 on each call
    int j = 0;  // automatic variable
    j = j + i;
    return j;
}

// increment function with static variable j;
int staticIncFunc(int i){
    // last value is stored in static int
    // i.e. j is not initialize to 0 on each call
    static int j = 0; // by default initialize with 0
    j = j + i;
    return j;
}

int main(){

    int increment_value=1;
    int auto_output; 
    int static_output;
    
    for(int j=0; j<5; j++){
        auto_output = incFunc(increment_value);
        static_output = staticIncFunc(increment_value);
    }

    printf(" output from incFunc: auto_output = %d\n", auto_output);
    printf(" output from staticIncFunc: static_output = %d\n", static_output);

    return 0;
}

/* Outputs
 output from incFunc: auto_output = 1
 output from staticIncFunc: static_output = 5
*/
