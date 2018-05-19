// matrix_matrix_mul.c
// matrix-matrix product

#include <stdio.h> 

// Note that arrays are bound for all dimensions except first. Therefore,
// size is defined as global variable, as we need to use them in function. 
const int M = 2;   // constant is required as we are using it for array size
const int N = 3;   // constant is required as we are using it for array size
const int P = 3;   // constant is required as we are using it for array size

void matrix_matrix_mul(int [][P], int [][N], int [][N]);

// calculate matrix-matrix product
void matrix_matrix_mul(int A[][P], int B[][N], int result[][N]){

    int i, j, k;

    for (i=0; i<M; i++){
        for (j=0; j<N; j++){
            for(k=0; k<P; k++){
                result[i][j] += A[i][k] * B[k][j]; 
            }
        }
    }
}

int main(){
    int i, j;
    int A[M][P] = {{2, 3, 4}, {4, 5, 6}}; 
    int B[P][N] = { 
            {1, 3, 5},
            {2, 3, 4},
            {1, 2, 3}
    }; // Matrix A of size M x N
    int result[M][N] = {0};  // initialize with zero

    matrix_matrix_mul(A, B, result);

    printf("Result = ");
    for (i=0; i<M; i++){
        printf("\nRow %d : ", i);
        for (j=0; j<N; j++)
            printf("%d, ", result[i][j]);
    }
    return 0;
}

/* Outputs
Result =
Row 0 : 12, 23, 34,
Row 1 : 20, 39, 58,
*/