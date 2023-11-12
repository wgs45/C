#include <stdio.h>
// Tex typesetting language
// source: uva 00272

// sample input:
// "to be or not to be"

// sample output:
// ``to be or not to be''

int main() {
    char input = '\0'; // Initialize input variable to null character
    int count = 0; // Initialize count variable to 0

    // Loop until end of file is reached
    while(scanf("%c", &input) != EOF) {
        // Check if input is a double quote and count is 0
        if (input == '"' && count == 0) {
            count = 1; // Set count to 1
            printf("``"); // Print opening double backticks
        }
        // Check if input is a double quote and count is 1
        else if (input == '"' && count == 1) {
            count = 0; // Set count to 0
            printf("''"); // Print closing double backticks
        }
        // If input is not a double quote or count is not 0 or 1
        else {
            printf("%c", input); // Print the input character as is
        }
    }

    return 0; // Exit the program
}
