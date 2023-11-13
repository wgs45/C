#include <stdio.h>

// c program to print multiplication table based on user input

// ! function prototypes
void print_multiplication_table(int num, int multiplier);

int main() {
    int num;

    // Get input from the user
    printf("Enter a number to get its nine times table: ");
    scanf("%d", &num);

    // Check if the input is valid
    if (num < 1) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    // Call the recursive function to print the multiplication table
    printf("Multiplication table for %d:\n", num);
    print_multiplication_table(num, 1); // Start with multiplier = 1

    return 0; // Exit successfully
}

void print_multiplication_table(int num, int multiplier) {
    if (multiplier > 9) {
        return; // Base case: stop recursion when multiplier exceeds 9
    }

    // Print the result for the current step
    printf("%d x %d = %d\n", num, multiplier, num * multiplier);

    // Recursively call the function for the next multiplier
    print_multiplication_table(num, multiplier + 1);
}
