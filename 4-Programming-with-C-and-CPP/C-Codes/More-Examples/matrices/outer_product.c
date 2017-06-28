// outer_product.c

#include <stdio.h> 

// Note that arrays are bound for all dimensions except first. Therefore,
// size is defined as global variable, as we need to use them in function. 
const int M = 2;   // constant is required as we are using it for array size
const int N = 3;   // constant is required as we are using it for array size

void outer_product(int [][1], int [][1], int [][N]);

// calculate matrix-vector product
void outer_product(int x[][1], int y[][1], int result[][N]){

    int i, j;

    for (i=0; i<M; i++){
        for (j=0; j<N; j++)
            result[i][j] += x[i][0]*y[j][0]; 
    }
}

int main(){
    int i, j;
    int x[M][1] = {{2}, {4}}; // vector x
    int y[N][1] = {{2}, {4}, {6}}; // vector x
    int result[M][N] = {0}; // outer product of size M x N

    outer_product(x, y, result);

    printf("Result : ");
    for (i=0; i<M; i++){
        printf("\nRow %d = ", i); 
        for (j=0; j<N; j++)
            printf("%d, ", result[i][j]);       
    }
    return 0;
}

/* Outputs
Result :
Row 0 = 4, 8, 12,
Row 1 = 8, 16, 24,
*/