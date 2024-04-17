#include <stdio.h>

int main() {
    float a = 0, b = 0, result = 0;

    printf("Enter a and b value (seperated with space): ");
    scanf("%f %f", &a, &b);

    result = a / b;
    printf("Result: %.3f\n", result);

    return 0;
}
