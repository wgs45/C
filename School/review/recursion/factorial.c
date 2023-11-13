#include <stdio.h>

// c program to find factorial numbers
// sample input:
// 4

// sample output:
// 24

// ! function prototypes
int factorial(int num);

int main() {
    // Declare and initialize the variable num with the value 4
    int num = 4;

    // Print the result of calling the factorial function with num as the argument
    printf("%d\n", factorial(num));

    // Return 0 to indicate successful execution of the program
    return 0;
}

// Define the factorial function that takes an integer argument num
int factorial(int num) {
    // Declare a variable to store the result of the factorial calculation
    int result;

    // Check if num is equal to 0 or 1
    if (num == 0 || num == 1) {
        // If so, return num as the result
        return num;
    } else {
        // Otherwise, calculate the factorial by recursively calling the factorial function with num - 1 as the argument
        result = num * factorial(num - 1);
    }

    // Return the calculated factorial result
    return result;
}