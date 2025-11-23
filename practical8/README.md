# Recursive functions 
The aim is to calculate the greatest common divisor (GCD) of two integers using an iterative approach and a recursive approach (using a while loop and a function that calls itself, respectively).

The program is based on the Euclidean Algorithm, this one replaces the large number with the remainder of dividing the two numbers until one of them becomes zero. Then, the remaining number is the GCD. 

We include the following file: 

 recursive.c : Main C source file that contains both GCD functions and the main function. 

## How this works
We implement the Euclidean algorithm using a while loop and then keeps going until b is zero, if that happens, we got a value, a, known as the GCD.

The recursive function implements the same logic recursively, if b is zero, returns the GCD. 


### How to compile and run
Compile recursive.c using gcc command. Then run the executable. 

After this, the user must type two integers.