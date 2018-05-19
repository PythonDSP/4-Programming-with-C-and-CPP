// multiDimArray.c
// create multidimensional array 

#include <stdio.h>

int main(){
    int x[3][2] = {
                {5, 6},  // row 1
                {7, 9},  // row 2
                {1, 2}   // row 3
            };

    // print specific element of array
    printf("x[0][1] : %d\n",  x[0][1]); // 6
    printf("x[2][0] : %d\n", x[2][0]); // 1

    // print all elements of array
    for (int i=0; i<3; i++){        // select all rows
        for (int j=0; j<2; j++){    // select all columns
            printf("%d, ", x[i][j]); // print values of x[i][j]
        }
        printf("\n"); // line change for each row i.e. i
    }
    return 0;
}

/* Output
x[0][1] : 6
x[2][0] : 1
5, 6,
7, 9,
1, 2,
*/