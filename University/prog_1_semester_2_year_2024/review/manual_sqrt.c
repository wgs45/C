#include <stdio.h>

int main() {
    int input, i;

    printf("Enter a number to find a square root: ");
    scanf("%d", &input);

    for (i = 1; i <= input; i++) {
        if (i * i == input) {
            printf("The square root of %d is %d. \n", input, i);
            break;
        }
    }

    return 0;
}