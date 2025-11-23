# Matrix multiplication 
The aim is to implement a simple matrix multiplication in C. Here we split the code across multiple files (main.c and matmutl.c). We use Makefile to compile and link the program.

The program multiplies two matrices. N is the number of rows for A and C, P the number of columns of A and and number of rows of B, Q is the number of columns of B and C.
The elements are defined according to the exercise instructions. 

main.c is the main program, initializes the matrices, calls the multiplication and prints the results. 
matmult.c contains the matrix multiplication function. 
Makefile automates the compilation and linking. 

## How to run and compile 
type : make 
Then just run ./matmult
