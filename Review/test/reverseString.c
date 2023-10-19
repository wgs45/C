#include <stdio.h>
#include <string.h>
// ? This program reverses a string. h is a standard header file that contains
// ? functions for manipulating strings (arrays of characters).

// function prototypes
void reverse(char str[]);

int main() {
    char str[100];
    printf("Enter a word: ");
    scanf("%s", str);
    reverse(str);

    return 0;
}

// TODO: create a function that reverse the string
// ? The function reverses the order of the characters in the array by swapping the first character with the last character,
// ? The second character with the second-to-last character, and so on, until the middle of the array is reached.
// ? Then prints the resulting reversed string.
void reverse(char str[]) {
    int i, j, temp;

    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Result: %s\n", str);
}