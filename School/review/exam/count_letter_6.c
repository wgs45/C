#include <stdio.h>
#include <string.h>

int main() {
    int i; // Declare a variable to use as a loop counter
    char str[100]; // Declare an array to store the input string
    int count[4] = {0}; // Declare an array to store the count of each letter

    scanf("%s", str); // Read a string from the user and store it in the 'str' array

    for (i = 0; i < strlen(str); i++) { // Loop through each character in the 'str' array
        switch (str[i]) { // Check the value of the current character
            case 'a': case 'A': count[0]++; break; // If the character is 'a' or 'A', increment the count at index 0
            case 'c': case 'C': count[1]++; break; // If the character is 'c' or 'C', increment the count at index 1
            case 'g': case 'G': count[2]++; break; // If the character is 'g' or 'G', increment the count at index 2
            case 't': case 'T': count[3]++; break; // If the character is 't' or 'T', increment the count at index 3
            default: break; // If the character is not 'a', 'A', 'c', 'C', 'g', 'G', or 't', 'T', do nothing
        }
    }

    printf("a/A: %d, c/C: %d, g/G: %d, t/T: %d\n", count[0], count[1], count[2], count[3]); // Print the counts for each letter

    return 0; // Exit the program with a success status
}