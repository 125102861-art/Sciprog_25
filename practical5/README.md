# Pointers and series approximation in C. 
The aim is two use pointers and functions to compute the Fibonacci series. Also, the second part is dedicated to comprare two methods of computing the inverse hyperbolic tangent. Both codes request user input. 

First, Fibonacci.c
Prompts the user for an integer 'n'. Checks that n, making sure it is a non negative integer. Then, the function next_fib takes two integers by pointer, calculates the next Fibonacci number and updates the variables used. A loop in the main function repeatedly calls this function to generate all Fibonacci terms up to the n selected by the user. 

Secondly, Sum.c
We use two methods to calculate the inverse hyperbolic tangent function using two methods and we compare their accuracy: Maclaurin series and Logarithmic identity. The program prompts the user for a precision value delta, e.g. 1e-6. Then computes both versions of the function for values of x from -0.9 to 0.9 in steps of 0.01, results are stored in arrays and displayed in a table. A comparison function checks wether the two methods match within a relative error tolerance (1e-6).

## Compilation and Execution
gcc Fibonacci.c -o the name you want 
gcc Sum.c -lm  -o the name you want. 
Run the executables. 

