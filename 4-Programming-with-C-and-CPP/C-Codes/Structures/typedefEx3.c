// typedefEx3.c
// typedef to create structure

#include <stdio.h>

// define struct at the top, then typedef and then function prototype
typedef struct item
{
    int id;
    const char *company;
    float cost;
} Item; // semicolon at the end
// typedef struct item Item; // no need of this line now...

void structRefFucn(Item *);  // pass by reference

int main(){
    Item oven;

    // passing structure by reference
    structRefFucn(&oven);
    printf("oven id = %d\n", oven.id);
    printf("oven company = %s\n", oven.company);
    printf("oven cost = %f", oven.cost);
}

void structRefFucn(Item *i){
    i->id = 112;
    i->company = "Sony";
    i->cost = 99.99;
}

/* Outputs
oven id = 112
oven company = Sony
oven cost = 99.989998 */
