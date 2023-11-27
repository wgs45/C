#include <stdio.h>

// ? only for reference
// ! Warning: 'gets' is deprecated: This function is provided
// ! for compatibility reasons only.  Due to security concerns inherent in the design of gets(3)

// Function prototype
int count_spaces(const char str[]);

int main() {
    // Declare a character array with a size of 100
    char str[100];

    // Prompt the user to enter a string
    printf("Enter a string: ");

    // Read the input string from the user and store it in the str array
    // Note: The gets function is unsafe and deprecated, consider using fgets instead.
    gets(str);

    // Print the number of spaces in the input string by calling the count_spaces function
    printf("Number of spaces: %d\n", count_spaces(str));

    // Return 0 to indicate successful execution of the program
    return 0;
}

int count_spaces(const char str[]) {
    // Initialize a variable count to keep track of the number of spaces
    int count = 0;

    // Loop through each character in the string until the null character is encountered
    // Note: The correct condition to check for the end of the string is str[i] != '\0'.
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        // Check if the current character is a space
        if (str[i] == ' ') {
            // If it is, increment the count variable
            count++;
        }
    }

    // Return the final count of spaces in the string
    return count;
}