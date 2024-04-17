#include <stdio.h>

int main() {
    float a = 0, b = 0, c = 0, result = 0;

    printf("Enter a, b, and c value (seperated with space): ");
    scanf("%f %f %f", &a, &b, &c);

    result = (a + b) * c / 2;
    printf("Result: %f\n", result);

    return 0;
}
