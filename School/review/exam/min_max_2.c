#include <stdio.h>

int main() {
    int num;
    int min = 0, max = 0;
    int firstInput = 1; // Flag to track the first input

    printf("Enter numbers (enter a non-numeric value to terminate): ");

    while (1) {
        if (scanf("%d", &num) == 1) {
            if (firstInput) {
                min = max = num;
                firstInput = 0;
            } else {
                if (num < min) {
                    min = num;
                }
                if (num > max) {
                    max = num;
                }
            }
        } else {
            break; // Exit the loop if a non-numeric value is entered
        }
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}