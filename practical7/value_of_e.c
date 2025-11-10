#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function prototypes
double estimate_e(int order); //stimates the value of e according to a certain order 
int* allocatearray(int n); //allocates memory for an integer array 
void fillwithones(int* arr, int n); // fills array with ones 
void printarray(int* arr, int n); // prints array with all elements 
void freearray(int* arr); //frees the allocated memory 

int main() {
    //Part 1: Estimating e using dynamically allocated array
    printf("Estimating e using polynomial expansion:\n");
    double true_e = exp(1.0); //true value of e

    for (int n = 1; n <= 15; n++) { //loop trough polynomial orders from 1 to 15  
        double est = estimate_e(n);
        printf("Order %2d: Estimate = %.10f, Error = %.10f\n", n, est, fabs(true_e - est)); //stimate using n terms of the Taylor series 
    }

    printf("\nNote: Higher order terms may reduce accuracy due to floating-point precision loss.\n\n");

    //Part 2: Basic pointers and dynamic memory allocation
    int size; //variable to store 
    printf("Enter array size: "); //enter the array size 
    scanf("%d", &size);

    int* arr = allocatearray(size); //dynamically allocate an integer array of given size 
    fillwithones(arr, size); // fill it with ones 
    printarray(arr, size); // print to verify 
    freearray(arr); // free the allocated memory to avoid memory leaks 

    return 0;
}

// --- Function definitions ---

// Estimate e using series expansion, this is Taylor series 
double estimate_e(int order) {
    double* terms = (double*)malloc(order * sizeof(double)); //dynamically allocate  an array to hold each term in the serie
    if (terms == NULL) {
        printf("Memory allocation failed!\n"); // check if it malloc succees 
        exit(1);
    }

    terms[0] = 1.0; // first term (1/0!)
    double factorial = 1.0; //variable to hold factorial values 
    for (int i = 1; i < order; i++) { //compute each term 
        factorial *= i; // update it 
        terms[i] = 1.0 / factorial; 
    }

    double sum = 0.0; //sum all terms to get the approximated value 
    for (int i = 0; i < order; i++) {
        sum += terms[i];
    }

    free(terms); // free the memory 
    return sum;
}

// Allocate memory for an integer array
int* allocatearray(int n) {  
    int* arr = (int*)malloc(n * sizeof(int)); // allocate the memory for n integers
    if (arr == NULL) {  // check 
        printf("Memory allocation failed!\n");
        exit(1);
    }
    return arr;
}

// Fill array with ones
void fillwithones(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = 1;
    }
}

// Print array elements
void printarray(int* arr, int n) {
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Free allocated memory
void freearray(int* arr) {
    free(arr);
}
