// structMemoryEx.c
// pointer-variable of struct

#include <stdio.h>

struct item
{  
    int id; 
    const char *company;
    float cost;
}; // semicolon at the end

int main(){

    struct item radio = {101, "Sony", 99.99};  // variable radio of type `item'
    
    printf("id = %d\n", radio.id); // printing value using '.' operator
    printf("company = %s\n", radio.company);
}

/* Outputs
id = 101
company = Sony  */