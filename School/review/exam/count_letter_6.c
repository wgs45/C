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
    int count[256] = {0}; // Assuming ASCII character set

    int i;
    for (i = 0; str[i]; i++) {
        count[str[i]]++;
    }

    printf("Character Count:\n");
    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("%c: %d, ", i, count[i]);
        }
    }
}
