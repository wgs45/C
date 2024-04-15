#include <stdio.h>
#define PI 3.14

int main() {
    float radius = 0, result = 0;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    result = PI * (radius * radius);

    printf("Result: %f\n", result);

    return 0;
}
