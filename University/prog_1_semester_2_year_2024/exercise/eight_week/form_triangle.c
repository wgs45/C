#include <stdio.h>

int main() {
    float a = 0, b = 0, c = 0;

    printf("Enter A B C values seperated with space: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Can form a triangle.\n");

        if (a == b && b == c) {
            printf("Equilateral triangle.\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles triangle.\n");
        } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            printf("Right triangle.\n");
        } else {
            printf("Obtuse triangle.\n");
        }
    } else {
        printf("Can't form a triangle.\n");
    }

    return 0;
}
