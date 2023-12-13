#include <stdio.h>

int main() {
    char prevChar = getchar();
    char currentChar;

    while ((currentChar = getchar()) != '\n') {
        printf("[%c]\n", prevChar);
        printf("%d ==> [%d]\n", (int)prevChar, currentChar, currentChar);
        prevChar = currentChar;
    }

    return 0;
}
