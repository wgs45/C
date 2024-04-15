#include <stdio.h>

int main() {
    float a = 0, b = 0, result = 0;

    printf("Enter A and B values: ");
    scanf("%f %f", &a, &b);

    result = a / b;

    printf("Result: %.2f\n", result);

    return 0;
}
