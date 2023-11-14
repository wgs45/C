#include <stdio.h>

// ! function prototypes
int calculateSum(int n);

int main() {
    // Declare variables
    int n;

    // Prompt user for input
    scanf("%d", &n);

    // Check if n is non-negative
    if (n < 0) {
        printf("Please enter a non-negative number.\n");
        return 1; // Exit with an error code
    }

    // Call the function and print the result
    printf("The sum is: %d\n", calculateSum(n));

    return 0;
}

int calculateSum(int n) {
    // Base case: when n becomes 0, return 0
    if (n == 0) {
        return 0;
    } else {
        // Recursive case: calculate sum for n-1 and add n*n
        return calculateSum(n - 1) + (n * n);
    }
}
