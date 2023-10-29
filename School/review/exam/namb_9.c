#include <stdio.h>
#include <string.h>

// Function prototypes
void checkOccurrences(char *s1, char *s2);

int main() {
    // Declare two character arrays to store the input strings
    char s1[100], s2[100];

    // Prompt the user to enter two strings
    printf("Enter two strings: ");
    scanf("%s %s", s1, s2);

    // Call the checkOccurrences function and pass the input strings as arguments
    checkOccurrences(s1, s2);

    return 0;
}

// Function to check the occurrences of characters in the two strings
void checkOccurrences(char *s1, char *s2) {
    // Get the length of the first string
    int len = strlen(s1);

    // Initialize counters for the number of characters that are in the same position and different positions
    int same_position_count = 0;
    int different_position_count = 0;

    // Iterate over each character in the first string
    for (int i = 0; i < len; i++) {
        // Check if the current character in the first string is the same as the corresponding character in the second string
        if (s1[i] == s2[i]) {
            // If they are the same, increment the same_position_count
            same_position_count++;
        } else {
            // If they are different, search for the character in the second string
            for (int j = 0; j < len; j++) {
                // Check if the current character in the first string is present in the second string
                if (s1[i] == s2[j]) {
                    // If it is, increment the different_position_count and break out of the inner loop
                    different_position_count++;
                    break;
                }
            }
        }
    }

    // Print the counts of characters that are in the same position and different positions
    printf("%dA%dB\n", same_position_count, different_position_count);
}