// matrix_transpose.c

#include <stdio.h> 

const int M = 2;
const int N = 3;

void matrix_transpose(int [][N], int [][M]);

// calculate matrix-transpose
void matrix_transpose(int A[][N],  int result[][M]){

    int i, j;

    for (i=0; i<M; i++){
        for (j=0; j<N; j++){ 
                result[j][i] = A[i][j]; 
        }
    }
}

int main(){
    int i, j;
    int A[M][N] = {
                    {2, 3, 4},
                    {1, 9, 5}
                }; 
    int result[N][M] = {0};  // initialize with zero

    matrix_transpose(A, result);

    printf("Result = ");
    for (i=0; i<N; i++){
        printf("\nRow %d : ", i);
        for (j=0; j<M; j++)
            printf("%d, ", result[i][j]);
    }
    return 0;
}

/* Outputs
Result =
Row 0 : 2, 1,
Row 1 : 3, 9,
Row 2 : 4, 5,
*/