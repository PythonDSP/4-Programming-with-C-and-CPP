// typedef.c
// typedef to create alias

#include <stdio.h>

// define struct at the top, then typedef and then function prototype
struct item
{  
    int id; 
    const char *company;
    float cost;
}; // semicolon at the end
typedef struct item Item; // short name of 'struct item' = Item

void structRefFucn(Item *);  // pass by reference

int main(){
    struct item oven;

    // passing structure by reference
    structRefFucn(&oven);
    printf("oven id = %d\n", oven.id);
    printf("oven company = %s\n", oven.company);
    printf("oven cost = %f", oven.cost);
}

void structRefFucn(struct item *i){
    i->id = 112;
    i->company = "Sony";
    i->cost = 99.99;
}

/* Outputs
oven id = 112
oven company = Sony
oven cost = 99.989998 */