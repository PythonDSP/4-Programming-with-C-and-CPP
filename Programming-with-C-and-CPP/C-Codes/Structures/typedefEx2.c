// typedefEx2.c
// typedef to create structure

#include <stdio.h>

// define struct at the top, then typedef and then function prototype
typedef struct
{
    int id;
    const char *company;
    float cost;
} item; // semicolon at the end
// typedef struct item Item; // no need of this line now...

void structRefFucn(item *);  // pass by reference

int main(){
    item oven;

    // passing structure by reference
    structRefFucn(&oven);
    printf("oven id = %d\n", oven.id);
    printf("oven company = %s\n", oven.company);
    printf("oven cost = %f", oven.cost);
}

void structRefFucn(item *i){
    i->id = 112;
    i->company = "Sony";
    i->cost = 99.99;
}

/* Outputs
oven id = 112
oven company = Sony
oven cost = 99.989998 */
