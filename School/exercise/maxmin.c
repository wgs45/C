#include <stdio.h>

int main() {
    int min, max, num;
    int x;

    for (x = 0; x < 10; x++) {
        printf("Enter 10 numbers: ");
        scanf("%d", &num);
        if (x == 0) {
            min = num;
            max = num;
        } else {
            if (num > max) {
                max = num;
            } else if (num < min) {
                min = num;
            } else {
                printf("Invalid value");
            }
        }
    }
    printf("Max value: %d\n", max);
    printf("Min value: %d\n", min);

    return 0;
}