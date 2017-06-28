// structArrayEx.cpp
// array of structure
#include <stdio.h>

int main(){
    struct item
    {  
        int id; 
        const char *company;
        float cost;
    }; // semicolon at the end

    struct item a[3];  // `a' is the array of structure `item'

    a[0].id = 102;
    a[0].company = "Panasonic"; // assiging value using '.' operator
    printf("a[0] company: %s", a[0].company);
}

/* Outputs
a[0] company: Panasonic */