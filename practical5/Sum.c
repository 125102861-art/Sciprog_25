#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define SIZE 181 // ((0.9 - (-0.9)) / 0.01) + 1, this is how many x values we will test. 

double artanh1(double x, double delta) {
    double term = x;   // First term in series,in this function we compute the arthg(x) using Maclaurin series. 
    double result = 0;
    int n = 0;

    while (fabs(term) > delta) {
        result += term;
        n++;
        term = pow(x, 2 * n + 1) / (2 * n + 1); // this is simply the formula 
    }

    return result; // it will stop with the desired precision, we return the approximate result 
}

double artanh2(double x) {
    return 0.5 * (log(1 + x) - log(1 - x)); // we use the logarithmic definition
}

// Function to compare up to 10 significant digits, using relative error 
int compare_10_sig_figs(double a, double b) {
    if (a == 0.0 && b == 0.0) return 1;
    double relative_error = fabs((a - b) / ((fabs(a) + fabs(b)) / 2));
    return relative_error < 1e-10; // returns 1 if they are within a certain tolerance, else, 0. 
}

int main() {
    double delta;

    // User input for delta, in this main part the results are compared across -0.9 to 0.9
    printf("Enter precision value (delta, e.g., 1e-6): ");
    if (scanf("%lf", &delta) != 1 || delta <= 0 || delta >= 1) {
        printf("Invalid input. Please enter a positive delta < 1.\n");
        return 1; //exits if the input is not allowed
    }

    // Arrays for storing results from  both methods 
    double x_vals[SIZE], artanh1_vals[SIZE], artanh2_vals[SIZE];

    int accurate_count = 0; // number of matches 

    printf("\n%-8s %-15s %-15s %-10s\n", "x", "artanh1", "artanh2", "Match?"); //table header 
    printf("-----------------------------------------------------------\n");

    for (int i = 0; i < SIZE; i++) {
        double x = -0.9 + i * 0.01; //calculates current x 
        x_vals[i] = x; //stores it 
        artanh1_vals[i] = artanh1(x, delta); //we compute the y values using both methods 
        artanh2_vals[i] = artanh2(x);

        int match = compare_10_sig_figs(artanh1_vals[i], artanh2_vals[i]); // compares both results 
        if (match) accurate_count++; //counts matches 

        printf("%-8.2f %-15.10f %-15.10f %-10s\n", x, artanh1_vals[i], artanh2_vals[i], match ? "Yes" : "No"); // prints one row of the table 
    }

    printf("\nMatched to 10 significant figures: %d out of %d values.\n", accurate_count, SIZE); // displays results 
    return 0;
}