#include <stdio.h>

int main() {
    int num = 0;

    printf("Enter the amount of dollar: ");
    scanf("%d", &num);

    int divided = num / 20;
    int remaining = num % 20;

    printf("The amount of $20: %d\n", divided);

    divided = remaining / 10;
    remaining = remaining % 10;

    printf("The amount of $10: %d\n", divided);

    divided = remaining / 5;
    remaining = remaining % 5;

    printf("The amount of $5: %d\n", divided);

    divided = remaining / 1;
    remaining = remaining % 1;

    printf("The amount of $1: %d\n", divided);

    return 0;
}