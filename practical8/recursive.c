#include <stdio.h>

// Iterative version of GCD
int gcd_iterative(int a, int b) {
    int temp; // temporary variable for swapping values
    while (b != 0) { // repeat until the second number becomes zero 
        temp = b; // stores "b" in temp
        b = a % b; // assigns remainder of "a" divided by "b" to "b"
        a = temp; // sets "a" to the previous value of "b"
    }
    return a; // when "b" is zero, "a" contains the GCD
}

// Recursive version of GCD
int gcd_recursive(int a, int b) {  
    if (b == 0) // base case: if "b" is zerp, GCD is "a"
        return a;
    else
        return gcd_recursive(b, a % b); // recursive case: call gcd_recursive with (b, a % b)
}

int main() {
    int num1, num2; // variables to store the users input 

    printf("Enter two integers: "); // prompts user for two integers
    scanf("%d %d", &num1, &num2);

    printf("GCD (Iterative) of %d and %d is: %d\n", num1, num2, gcd_iterative(num1, num2));  // displays GCD using iterative method
    printf("GCD (Recursive) of %d and %d is: %d\n", num1, num2, gcd_recursive(num1, num2));  // displays GCD using recursive method


    return 0;
}
