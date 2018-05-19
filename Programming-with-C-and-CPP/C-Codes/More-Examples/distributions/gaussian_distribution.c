// gaussian_distribution.c
// data is saved in uniform_data.txt file for further processing using python

#include <stdio.h>
#include <stdlib.h>  // required for rand()
#include <math.h>    // required for sqrt, log and cos etc.

# define PI 22/7

int SAMPLES = 100000;  // total number of samples

double uniform_distribution(void);

// function to generate uniform distribution in range [0, 1)
double uniform_distribution() {
    // +2 is used to exclude the 1 in distribution...
    return (double)rand() / (double)(RAND_MAX + 2);  // RAND_MAX = 32767
}

int main (void){
    int i; 
    double uniform_data1, uniform_data2;
    double gaussian_data;

    FILE *fPtr; // file pointer

    if ((fPtr = fopen ("gaussian_data.txt", "w")) == NULL){  // "w" = write mode
        printf("File can not be open\n");
    }
    else {        
        for (i=0; i<SAMPLES; i++){
        uniform_data1 = uniform_distribution();
        uniform_data2 = uniform_distribution();

        // Box-Muller method to generate Guassian distribution
        // exclude 0, as it log(0) is infinite
        if (uniform_data1 != 0  && uniform_data2 !=0)   
            gaussian_data = sqrt(-2.0 * log(uniform_data1)) * 
                                cos(2 * PI * uniform_data2);     // use this or below

            // gaussian_data = sqrt(-2.0 * log(uniform_data1)) * 
            //                      sin(2 * PI * uniform_data2);  // use this or above

        fprintf(fPtr, "%f, ", gaussian_data);   // save data to file
        }
    }

    fclose (fPtr);
    return 0;
}