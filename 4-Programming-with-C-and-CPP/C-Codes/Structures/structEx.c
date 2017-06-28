// structEx.c
// create and access structure

#include <stdio.h>

int main(){
    struct item
    {  
        int id; 
        const char *company;  // char[30] will not work  at Line 23 for oven.company
        float cost;
    }; // semicolon at the end

    struct item radio = {101, "Sony", 99.99};  // variable radio of type `item'
    struct item oven; // variable oven of type `item'

    printf("radio details: \n");
    printf("id = %d\n", radio.id); // printing value using '.' operator
    printf("company = %s\n", radio.company);
    printf("price = %.2f\n", radio.cost);

    oven.id = 102;
    oven.company = "Panasonic"; // assiging value using '.' operator
    printf("oven company: %s\n", oven.company);
}

/* Outputs
radio details:
id = 101
company = Sony
price = 99.99
oven company: Panasonic  */