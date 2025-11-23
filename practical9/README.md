# Magic square checker.

The aim is to read a square matrix from a text file and determine wether is it a magic square.

A magic square is a matrix whose all rows have the same sum and the columns as well. Both digonals have the same sum also. 

For a nxn magic square, the magic constant is : 
M = n(n^2+1)/2 

We include the following files: 
main_stub.c : Contains the main() function, file reading, memory allocation and calls to the checker. 

magic_square_stub.h: Contains the implementation of isMagicSquare().

magic_square.txt: Example of a valid 3x3 magic square. 

not_magic_square.txt: Example of a non-magic square. 

## How this works 
The program asks the user for a filename
Then counts the number of lines, which corresponds to rows. The program opens the file and reads nxn integers into a dynamically allocated matrix. 

Then, it checks if it is a magic square, summing each row, each column and both diagonals. If any check fails, the matrix is not a magic square. 

Then, the program allocates the matrix and it fress memory row by row, then frees the row pointer array. 

### To compile it and run it 

Just use gcc main_stub.c -o magic

Using ./magic and trying in the enter file name input: magic_square.txt or not_magic_square.txt