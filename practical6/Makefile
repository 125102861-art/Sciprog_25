# compiler to use 
CC = gcc
# compiler flags, wall enables all warnings, O2 optimizes the code 
CFLAGS = -Wall -O2
# object file to build 
OBJ = main.o matmult.o
# executable
EXE = matmult
# link all object file into the final program
$(EXE): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXE) $(OBJ)
# compile main.c into an object file 
main.o: main.c
	$(CC) $(CFLAGS) -c main.c
# compile malmult.c into object file 
matmult.o: matmult.c
	$(CC) $(CFLAGS) -c matmult.c
# removes all compiled files 
clean:
	rm -f $(OBJ) $(EXE)
