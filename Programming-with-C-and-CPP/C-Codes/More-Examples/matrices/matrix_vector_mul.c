// matrix_vector_mul.c
// matrices and vector product

#include <stdio.h> 

// Note that arrays are bound for all dimensions except first. Therefore,
// size is defined as global variable, as we need to pass them in function. 
const int M = 2;   // constant is required as we are using it for array size
const int N = 3;   // constant is required as we are using it for array size

void matrix_vect_product(int [][N], int [][1], int , int, int [][1]);

// calculate matrix-vector product
void matrix_vect_product(int A[][N], int x[][1], int M, int N, int result[][1]){

    int i, j;

    for (i=0; i<M; i++){
        for (j=0; j<N; j++)
            result[i][0] += A[i][j] * x[j][0]; 
    }
}

int main(){
    int i;
    int x[N][1] = {{2}, {4}, {6}}; // vector x
    int A[M][N] = { 
            {1, 3, 5},
            {2, 3, 4}
    }; // Matrix A of size M x N
    int result[M][1] = {0};  // initialize with zero

    // since M is constant therefore it can not be passed by reference. 
    matrix_vect_product(A, x, M, N, result);

    printf("Result = ");
    for (i=0; i<M; i++)
        printf("%d, ", result[i][0]);

    return 0;
}

/* Outputs
Result = 44, 40,
*/