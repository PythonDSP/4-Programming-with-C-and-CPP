// triangular_matrix_mul.c
// trinangular matrix multiplication 

#include <stdio.h> 

const int N = 3;

void matrix_matrix_mul(int [][N], int [][N], int [][N]);

// calculate matrix-matrix product
void matrix_matrix_mul(int A[][N], int B[][N], int result[][N]){

    int i, j, k;

    for (i=0; i<N; i++){
        for (j=i; j<N; j++){    // starts from 'i'
            for(k=i; k<=j; k++){  // loop start from 'i' and ends at 'j'
                result[i][j] += A[i][k] * B[k][j]; 
            }
        }
    }
}

int main(){
    int i, j;
    int A[N][N] = {{2, 3, 4}, {0, 5, 6}, {0, 0, 2}}; 
    int B[N][N] = { 
            {1, 3, 5},
            {0, 3, 4},
            {0, 0, 3}
    };
    int result[N][N] = {0};  // initialize with zero

    matrix_matrix_mul(A, B, result);

    printf("Result = ");
    for (i=0; i<N; i++){
        printf("\nRow %d : ", i);
        for (j=0; j<N; j++)
            printf("%d, ", result[i][j]);
    }
    return 0;
}

/* Outputs
Result =
Row 0 : 2, 15, 34,
Row 1 : 0, 15, 38,
Row 2 : 0, 0, 6,
*/