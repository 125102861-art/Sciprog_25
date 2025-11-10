#include <stdio.h>
#include <math.h>

// We define a global array to store tan(x)
#define N 13 // From 0 to 60 degrees in 5 degrees steps ----> (60 / 5) + 1 = 13 values
double tan_values[N];

// Global variable for pi value 
float pi;

// Degree to Radian conversion function (obtained from the lecture), converts degreed to radians 
float degtorad(float arg) {
    return (pi * arg) / 180.0;
}

// Function to compute tan(x) and fill global array using a loop
void compute_tan_values() {
    int i;
    for (i = 0; i < N; i++) {
        float degrees = i * 5.0;
        float radians = degtorad(degrees);
        tan_values[i] = tan(radians);
    }
}

// Function to print tan values
void print_tan_values() {
    int i;
    printf("Angle (deg)\tTan(x)\n");
    for (i = 0; i < N; i++) {
        printf("%3d\t\t%.6f\n", i * 5, tan_values[i]);
    }
}

// Function to compute area under tan(x) from 0 to 60 degrees using Trapezoidal Rule (done in the previous task)
double trapezoidal_integral() {
    int i;
    double a = 0.0;
    double b = degtorad(60.0);
    double h = (b - a) / (N - 1); // Step size for 13 points ----> 12 intervals

    double sum = tan_values[0] + tan_values[N - 1];
    for (i = 1; i < N - 1; i++) {
        sum += 2.0 * tan_values[i];
    }

    return (h / 2.0) * sum;
}
//Compute pi from the inverse tangent
int main(void) {
    pi = atanf(1.0) * 4.0;

    compute_tan_values();
    print_tan_values();
//Call helper functions to fill and print the tangent array
    double integral = trapezoidal_integral();
    printf("\nEstimated integral = %.6f\n", integral);
    printf("Actual log(2)      = %.6f\n", log(2.0));
    printf("Absolute error     = %.6f\n", fabs(integral - log(2.0)));

    return 0;
}

