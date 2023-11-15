#include <stdio.h>

// c program cocacola
// source: uva 11150

// sample input:
// 8

// sample output:
// 12

int main() {
    int num; // Variable to store user input

    while (scanf("%d", &num) == 1) { // Loop until valid input is received
        int sum = num; // Initialize the sum with the input number

        while (num >= 3) { // Loop while the number is greater than or equal to 3
            sum += num / 3; // Add quotient of division by 3 to sum
            num = num / 3 + num % 3; // Update the number with quotient + remainder of division by 3
        }

        if (num == 2) { // Check if the remaining number is 2
            sum++; // Increment the sum by 1
            printf("%d\n", sum); // Print the sum
        }
    }

    return 0;
}