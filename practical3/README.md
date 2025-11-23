# Trapezoidal integration in C. 
Here we have to make use of the Trapezoidal Rule to stimate an integral numerically. 

trapezoidal.c: approximate the given function using the Trapezoidal Rule and compare it with the analytical value log(2). We divide the interval into N equal sub intervals. We evaluate tan(x) at each point and then apply the Trapezoidal Rule. Finally we compare it with the exact value and calculate the absolute error. 

## How to compile and run
gcc trapezoidal.c -lm -o and the name you want to give to the executable. Then run it using ./