#include <stdio.h>

#define MAX 100

// Function prototype for read_line
int read_line(char str[], int num);

int main() {
    char str[MAX]; // Declare a character array to store user input
    int num = 0; // Declare an integer variable to store the length of the input string

    printf("input string: "); // Print a prompt message to the user
    num = read_line(str, MAX); // Call the read_line function to read user input and store the length in num
    printf("%s", str); // Print the input string

    return 0; // Return 0 to indicate successful execution
}

int read_line(char str[], int num) {
    int ch, i = 0; // Declare an integer variable ch to store each character of the input and an integer variable i to keep track of the current index

    // Read characters from input until a newline character is encountered or the maximum number of characters is reached
    while ((ch = getchar()) != '\n') {
        if (i < num) { // Check if the current index is less than the maximum number of characters
            str[i++] = ch; // Store the character in the current index of the string and increment the index
        }
    }

    str[i] = '\0'; // Add a null terminator at the end of the string to mark the end
    return i; // Return the length of the string
}