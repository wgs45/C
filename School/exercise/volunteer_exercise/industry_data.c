#include <stdio.h>
#include <string.h>

// c program to reverse case

// sample input:
// 2
// The Dow Jones Industrial Average ended 32.62 Higher, or 0.28%, to 11555.63;
// and the Nasdaq finished 11.83 lower, or 0.47%, to 2515.51.

// sample output:
// How many sets of test data: 2
// Input a string: The new string [tHE dOW jONES iNDUSTRIAL aVERAGE ENDED 32.62 hIGHER, OR 0.28%, TO 11555.63;]
// Input a string: The new string [AND THE nASDAQ FINISHED 11.83 LOWER, OR 0.47%, TO 2515.51.]

// Function prototype
void reverseCase(char *str);

int main() {
    int num_sets;
    printf("How many sets of test data: ");
    scanf("%d", &num_sets);
    while (getchar() != '\n'); // Clear the input buffer

    // Iterate over the number of sets
    for (int i = 0; i < num_sets; ++i) {
        char sentence[1000];
        printf("\nInput a string: ");
        fgets(sentence, sizeof(sentence), stdin); // Read a line of input
        sentence[strcspn(sentence, "\n")] = '\0'; // Remove the trailing newline character

        reverseCase(sentence); // Call the reverseCase function to reverse the case of the characters

        printf("The new string [%s]\n", sentence); // Print the modified string
    }

    return 0;
}

// reverse case using ascii code
void reverseCase(char *str) {
    while (*str != '\0') {
        // If the character is uppercase, convert it to lowercase
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + 32;
        }
        // If the character is lowercase, convert it to uppercase
        else if (*str >= 'a' && *str <= 'z') {
            *str = *str - 32;
        }
        str++; // Move to the next character
    }
}