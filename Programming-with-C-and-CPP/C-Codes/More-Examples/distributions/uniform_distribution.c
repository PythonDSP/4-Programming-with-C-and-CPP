// uniform_distribution.c
// data is saved in uniform_data.txt file for further processing using python

#include <stdio.h>
#include <stdlib.h>  // required for rand()

int SAMPLES = 100000;  // total number of samples

double uniform_distribution(void);

// function to generate uniform distribution in range [0, 1)
double uniform_distribution() {
    // +2 is used to exclude the 1 in distribution...
    return (double)rand() / (double)(RAND_MAX + 2);  // RAND_MAX = 32767
}

int main (void){
    int i; 
    double uniform_data;

    FILE *fPtr; // file pointer

    if ((fPtr = fopen ("uniform_data.txt", "w")) == NULL){  // "w" = write mode
        printf("File can not be open\n");
    }
    else {        
        for (i=0; i<SAMPLES; i++){
        uniform_data = uniform_distribution();
        fprintf(fPtr, "%f, ", uniform_data);   // save data to file
        }
    }

    fclose (fPtr);
    return 0;
}