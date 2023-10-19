#include <stdio.h>

int main() {
    int c, x, white_space, other_input;
    int max_digit[10];

    white_space = other_input = 0;
    for (x = 0; x < 10; x++) {
        max_digit[x] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            ++max_digit[c - '0'];
        } else if (c == ' ' || c == '\n' || c == '\t') {
            white_space++;
        } else {
            other_input++;
        }
    }

    printf("Digits: ");
    for(x = 0; x < 10; x++) {
        printf("%d ", max_digit[x]);
    }

    printf(", white space: %d, other: %d\n", white_space, other_input);

    return 0;
}