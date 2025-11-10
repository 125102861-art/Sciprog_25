#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
    int i, N = 12;
    double a = 0.0; //lower limit 
    double b = M_PI / 3.0; //upper limit 
    double h = (b - a) / N; //step-size
    double sum = 0.0;
    double xi;

    // First and last terms
    sum = tan(a) + tan(b);

    // Loop over internal points
    for (i = 1; i < N; i++) {
        xi = a + i * h;
        sum += 2.0 * tan(xi);
    }

    // Final result, where we apply the trapezoidal rule. 
    double integral = (h / 2.0) * sum;

    // Print result
    printf("Estimated integral = %.6f\n", integral);
    printf("Actual log(2)      = %.6f\n", log(2.0));
    printf("Absolute error     = %.6f\n", fabs(integral - log(2.0)));

    return 0;
}

