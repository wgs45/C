#include <stdio.h>
#include <ctype.h>

// Function prototype
void replace_letters(char s[], char *letters);

int main() {
    char inputString[100];
    char lettersToReplace[10];

    // Prompt user for input string
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Prompt user for letters to replace
    printf("Enter letters to replace: ");
    fgets(lettersToReplace, sizeof(lettersToReplace), stdin);

    // Remove newline characters from input
    for (int i = 0; inputString[i] != '\0'; i++) {
        if (inputString[i] == '\n') {
            inputString[i] = '\0';
            break;
        }
    }

    for (int i = 0; lettersToReplace[i] != '\0'; i++) {
        if (lettersToReplace[i] == '\n') {
            lettersToReplace[i] = '\0';
            break;
        }
    }

    // Call the replace_letters function to replace letters in the input string
    replace_letters(inputString, lettersToReplace);

    // Print the resulting string
    printf("Resulting string: %s\n", inputString);

    return 0;
}

// Function to replace letters in a string
void replace_letters(char s[], char *letters) {
    for (int i = 0; s[i] != '\0'; i++) {
        for (int j = 0; letters[j] != '\0'; j++) {
            if (tolower(s[i]) == tolower(letters[j])) {
                // Replace the letter with its uppercase version
                s[i] = toupper(s[i]);
                break;
            }
        }
    }
}