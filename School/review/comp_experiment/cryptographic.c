#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// c program to guess cryptographic words
// source: uva10008

int main() {
    int use_case, i, j;
    int count[91] = {0}; // an array to store the count of characters, initialized to zero
    char str[1000] = {0}; // an array to store the input string, initialized to zero

    // input number of use_case
    if (scanf("%d", &use_case) != 1) { // read the number of use_cases from input
        printf("Invalid input for use_case.\n");
        return 1;
    }

    // read input data
    getchar(); // remove the newline character from the input buffer

    while (use_case--) { // loop for each use_case
        fgets(str, sizeof(str), stdin); // read the input string

        for (i = 0; i < strlen(str); i++) { // loop through each character in the input string
            if (str[i] >= 'a' && str[i] <= 'z') { // if the character is lowercase letter
                count[str[i] - 'a' + 'A']++; // increment the count of its corresponding uppercase letter
            } else { // if the character is not a lowercase letter
                count[str[i]]++; // increment the count of the character
            }
        }
    }

    for (i = sizeof(str); i >= 1; i--) { // loop through the count array in descending order
        for (j = 'A'; j <= 'Z'; j++) { // loop through uppercase letters
            if (count[j] == i) { // if the count of the current letter matches the current count
                printf("%c %d\n", j, i); // print the letter and its count
            }
        }
    }

    return 0;
}