#include <stdio.h>

#define N 5
#define P 3
#define Q 4

void matmult(double A[N][P], double B[P][Q], double C[N][Q]); //function defined in Matmult.c 

int main() {
    double A[N][P], B[P][Q], C[N][Q]; //declare matrices 

    // Initialize A[i][j] = i + j this is in Fortran, but in C we start in 0, so we have to sum +1 to i,j so our first element of the matrix Aij is 2, not 0.
    for (int i = 0; i < N; i++)
        for (int j = 0; j < P; j++)
            A[i][j] = (i +1) + (j + 1); 

    // Initialize B[i][j] = i - j, same here, it is i-j in Fortran, in c it would be something like:
    for (int i = 0; i < P; i++) // (i+1)-(j+1), this is i-j
        for (int j = 0; j < Q; j++)
            B[i][j] = i - j;

    // Compute C = A * B
    matmult(A, B, C);

    // Print A
    printf("Matrix A:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++)
            printf("%6.2f ", A[i][j]);
        printf("\n");
    }

    // Print B
    printf("\nMatrix B:\n");
    for (int i = 0; i < P; i++) {
        for (int j = 0; j < Q; j++)
            printf("%6.2f ", B[i][j]);
        printf("\n");
    }

    // Print C
    printf("\nMatrix C = A * B:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < Q; j++)
            printf("%8.2f ", C[i][j]);
        printf("\n");
    }

    return 0;
}

