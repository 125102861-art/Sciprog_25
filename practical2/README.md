# Floating point arithmetic
The aim is to examine precision limits, binary representation of integers and numerical summation order. 

Conversion.c: we perform integer to float conversion, binary digit counting and floating point representation issues. So we store an integer and convert it to a 4 byte float. Converts the integer into its binary string and counts gow many binary digits are needed. 

Sum.c: computes a numerical series in two different summation orders to examine floating point rounding errors. Floating point rounding errors accumulate differently, the forward order adds the larger terms first, this has a smaller rounding error, while for reverse order, the small terms are added to an already large partial sum, so we have more error. 

## How to compile and run
gcc Conversion.c -o name you want to give to the executable -lm 
gcc Sum.c -o name you want to give to the executable
Then run the executables by just using ./