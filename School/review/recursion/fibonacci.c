#include <stdio.h>

// c program to calculate fibonacci numbers
// formulas: f(n) = f(n -1) + f(n - 2), for n >= 2

// sample input:
// 7

// sample output:
// 13

// ! function prototypes
int fibonacci(int num);

int main() {
    // Initialize 'num' variable with value 7
    int num = 7;

    // Print the result of the fibonacci function
    printf("%d\n", fibonacci(num));

    return 0;
}

// Recursive function to calculate the Fibonacci number
int fibonacci(int num) {
    // Declare 'result' variable
    int result;

    // Base case: if num is 0 or 1, return num itself
    if (num == 0 || num == 1) {
        return num;
    } else {
        // Recursive case: calculate the Fibonacci number by adding the two previous Fibonacci numbers
        result = fibonacci(num - 1) + fibonacci(num - 2);
    }

    // Return the calculated Fibonacci number
    return result;
}