#include <stdio.h>

//Function to calculate next Fibonacci nummber using pointers
void next_fib(int *fn, int *fn_minus1) {
    int temp = *fn;          //Stores current Fn temporarily 
    *fn = *fn + *fn_minus1; //Fn = Fn + Fn-1
    *fn_minus1 = temp;      //Update Fn-1
}

int main() {
    int n; //Number of terms used
    
    printf("Enter the value of n: "); 
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n"); //It cannot be a negative number, validates it
        return 1;
    }
    //Initializes the first two fibonacci numbers 
    int fn = 1, fn_minus1 = 0;
    //Print the base cases 
    printf("Fibonacci series up to F%d:\n", n);
    if (n >= 0) printf("0 ");
    if (n >= 1) printf("1 ");
    //Looop from F2 to Fn 
    for (int i = 2; i <= n; i++) {
        next_fib(&fn, &fn_minus1); //Updates them using pointers
        printf("%d ", fn);
    }

    printf("\n");
    return 0;
}

