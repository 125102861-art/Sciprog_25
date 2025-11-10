#include <stdio.h>

#define N 5 //number of rows in A and C
#define P 3 //number of columns A and rows in B
#define Q 4 //number of columns in B and C

void matmult(double A[N][P], double B[P][Q], double C[N][Q]) { //with this function we calculate the matrix multiplication C = A * B
    for (int i = 0; i < N; i++) { //loop over each row of A
        for (int j = 0; j < Q; j++) { //loop over each column of B
            C[i][j] = 0.0; // initialize the element to zero before accumulating the sum 
            for (int k = 0; k < P; k++) { // sum over  P (shared dimension between A and B)
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
