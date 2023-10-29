#include <stdio.h>
#include <string.h>

// ! function prototypes
void countOccurrences(char *str);

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    countOccurrences(str);

    return 0;
}

void countOccurrences(char *str) {
    // Create an array to store the count of each character
    int count[256] = {0}; // Assuming ASCII character set

    int i;
    // Iterate over each character in the string
    for (i = 0; str[i]; i++) {
        // Increment the count for the current character
        count[str[i]]++;
    }

    printf("Character Count:\n");
    // Iterate over each element in the count array
    for (i = 0; i < 256; i++) {
        // Print the count for characters that have non-zero counts
        if (count[i] != 0) {
            printf("%c: %d, ", i, count[i]);
        }
    }
}