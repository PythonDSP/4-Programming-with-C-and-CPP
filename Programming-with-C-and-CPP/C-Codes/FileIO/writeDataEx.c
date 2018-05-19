// writeDataEx.c

#include <stdio.h>

int main (void){
    int id; 
    char product[30];
    float price;

    FILE *fPtr; // file pointer

    // create 'data' folder first...
    if ((fPtr = fopen ("data/data.txt", "w")) == NULL){  // "w" = write mode
        printf("File can not be open\n");
    }
    else {
        printf("Enter details i.e. id, product-name and price\n");
        printf("-> ");
        scanf("%d %s %f", &id, product, &price);
        
        while(!feof(stdin)){
            fprintf(fPtr, "%d %s %f\n", id, product, price); // write to file
            printf("-> ");
            scanf("%d %s %f", &id, product, &price);
        }
    }

    fclose (fPtr);
    return 0;
}