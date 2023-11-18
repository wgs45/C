#include <stdio.h>
#include <string.h>

// c program to check if a word or sentences is a palindrome or not
// sample input:
// mom
// check

// sample output:
// true
// false

int main() {
    char input[] = "mom";

    // Initialize variables for tracking the indices of the input string
    int leftIndex = 0;
    int rightIndex = strlen(input) - 1;

    // Loop through the input string from both ends
    while (rightIndex > 0) {
        // Compare the characters at the current positions from both ends
        if (input[leftIndex++] != input[rightIndex--]) {
            // If the characters are not equal, it means the input string is not a palindrome
            printf("%s is not a palindrome\n", input);
            return 0;
        }
    }

    // If the loop completes without finding any unequal characters, it means the input string is a palindrome
    printf("%s is a palindrome\n", input);

    return 0;
}