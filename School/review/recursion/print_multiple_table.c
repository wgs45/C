#include <stdio.h>

// C program to print all multiplication table from 1 to 9
// Sample output:
// 1 x 1 = 1
// 1 x 2 = 2	1 x 3 = 3	1 x 4 = 4	1 x 5 = 5
// 1 x 6 = 6	1 x 7 = 7	1 x 8 = 8	1 x 9 = 9

// ! function prototypes
void printMultiplicationTable(int num, int multiplier);
void printTableForNumbers(int num);

int main() {

    printTableForNumbers(1);

    return 0;
}

void printMultiplicationTable(int num, int multiplier) {
    // Base case: stop recursion when multiplier is greater than 9
    if (multiplier > 9) {
        return;
    }

    // Print the multiplication table entry for the current multiplier
    printf("%d x %d = %d\t", num, multiplier, num * multiplier);

    // Recursively call the function for the next multiplier
    printMultiplicationTable(num, multiplier + 1);
}

// Function to print multiplication table for numbers 1 to 9
void printTableForNumbers(int num) {
    // Base case: stop recursion when num is greater than 9
    if (num > 9) {
        return;
    }

    // Print the multiplication table for the current number
    printMultiplicationTable(num, 1);
    printf("\n");

    // Recursively call the function for the next number
    printTableForNumbers(num + 1);
}