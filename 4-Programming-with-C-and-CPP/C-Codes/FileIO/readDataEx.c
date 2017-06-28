// readDataEx.c

#include <stdio.h>

int main (void){
    int id; 
    char product[30];
    float price;

    FILE *fPtr; // file pointer

    if ((fPtr = fopen ("data/data.txt", "r")) == NULL){ // "r" = read mode
        printf("File can not be open\n");
    }
    else {
        fscanf(fPtr, "%d %s %f", &id, product, &price);
        
        while(!feof(fPtr)){
            printf("%5d %10s %5.2f\n", id, product, price);
            fscanf(fPtr, "%d %s %f", &id, product, &price); // read from file
        }
    }

    fclose (fPtr);
    return 0;
}