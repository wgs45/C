#include <stdio.h>

int main() {
    int a = 0, b = 0, c = 0, i = 0, j = 0;

    printf("Enter a, b and c value (seperated with space): ");
    scanf("%d %d %d",  &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b) {
        printf("Can form a triangle.\n");
        
        if (a == b && b == c) {
            printf("Equilateral triange.\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles triangle.\n");
        } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            printf("Right triangle.\n");
        } else {
            printf("Obscute triangle.\n");
        }
    } else {
        printf("Can't form a triangle.\n");
    }

    return 0;
}
