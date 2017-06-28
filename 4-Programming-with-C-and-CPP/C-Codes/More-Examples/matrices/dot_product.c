// dot_product.c
// matrices must be of same size for dot-product

#include <stdio.h> 

void dot_product(int [][1], int [][1], int , int *);

// calculate dot product
void dot_product(int x[][1], int y[][1], int N, int *result){

    int i;
    *result = 0;

    for (i=0; i<N; i++){
       *result += (x[i][0] * y[i][0]); 
    }
}

int main(){

    const int N = 4;   // constant is required as we are using it for vector size
    int x[N][1] = {{2}, {4}, {6}, {8}}; // column vector x of size N x 1
    int y[N][1] = {{1}, {3}, {5}, {7}}; // column vector y of size N x 1
    int result;

    // since N is constant therefore it can not be passed by reference. 
    dot_product(x, y, N, &result);

    printf("Dot product = %d", result);

    return 0;
}

/* Outputs
dot product = 100
*/