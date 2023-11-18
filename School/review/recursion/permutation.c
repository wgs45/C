#include <stdio.h>
#include <string.h>

// c program to solve permutation problem

// ! Function prototype
void generatePermutations(char str[], int left, int right);

int main() {
    // Initialize the string
    char str[] = "XY";

    // Calculate the length of the string
    int n = strlen(str);

    // Generate permutations of the string
    generatePermutations(str, 0, n - 1);

    // Return 0 to indicate successful execution
    return 0;
}

// Recursive function to generate permutations
void generatePermutations(char str[], int left, int right) {
    int i, temp, count = 0;

    // Base case: If left and right are equal, print the string
    if (left == right) {
        printf("%s\n", str);
    } else {
        // Iterate through all possible positions for the current character
        for (i = left; i <= right; i++) {
            // Swap the current character with the character at position left
            temp = str[left];
            str[left] = str[i];
            str[i] = temp;

            // Recursively generate permutations for the remaining characters
            generatePermutations(str, left + 1, right);

            // Swap the characters back to restore the original order
            temp = str[left];
            str[left] = str[i];
            str[i] = temp;
            count++;
            printf("Total number of permutations: %d\n", count);
        }
    }
}