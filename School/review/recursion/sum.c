#include <stdio.h>

// c program to find the sum of natural numbers

// ! function prototypes
int sum(int num);

int main() {
    // Declare and initialize a variable called num with the value 2
    int num = 2;

    // Print the result of the sum function with num as the argument
    printf("%d\n", sum(num));

    // Return 0 to indicate successful execution
    return 0;
}

int sum(int num) {
    // Declare a variable called result
    int result;

    // Check if num is equal to 0
    if (num == 0) {
        // If num is 0, return 0
        return 0;
    } else {
        // If num is not 0, recursively call the sum function with num - 1 as the argument
        // Add num to the result of the recursive call
        result = num + sum(num - 1);
    }

    // Return the final result
    return result;
}