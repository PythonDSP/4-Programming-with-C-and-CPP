// structFuncEx.c
// pointer-variable of struct

#include <stdio.h>

// define struct at the top, then typedef and then function prototype
struct item
{  
    int id; 
    const char *company;
    float cost;
}; // semicolon at the end

// function prototype
int structValueFucn(struct item); // pass by value
void structRefFucn(struct item *);  // pass by reference

int main(){
    struct item radio, oven; // variable radio and oven of type `item'

    // passing structure by value
    radio.id = structValueFucn(radio);
    printf("radio id = %d\n\n", radio.id);    

    // passing structure by reference
    structRefFucn(&oven);
    printf("oven id = %d\n", oven.id);
    printf("oven company = %s\n", oven.company);
    printf("oven cost = %f", oven.cost);
}

int structValueFucn(struct item i){
    i.id = 111;
    return i.id;
}

void structRefFucn(struct item *i){
    i->id = 112;
    i->company = "Sony";
    i->cost = 99.99;
}

/* Outputs
radio id = 111

oven id = 112
oven company = Sony
oven cost = 99.989998  */