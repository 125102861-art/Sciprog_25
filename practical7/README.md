# Estimating e
The aim is to complete two tasks. Estimate the mathematical constant "e" using a Taylor series expansion and dynamic arrays and pointers use in C. 

The program asks for a polynomial order, dynamically allocates an array of doubles, stores each term in the array to use them in the summation, sums the terms to stimate the value of "e" and compares it to the true value computed using the exp function. It prints results for polynomial orders 1 through 15, showing the error decreasing as the order increases (this is expected).

The second part of the task is used for dynamic memory handling, allocating arrays, filling arrays so that every element stores the value 1, printing the arrats to the screen, releasing the memory. 

## How to compile and run 
Using gcc as always and -lm so we link the math library. 
Then run the executable ./
The program will print approximations of e from order 1-15, ask you for an array size (whatever you want), display the resulting array of ones. 