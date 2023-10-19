#include <stdio.h>

int main() {
    int x1, y1, x2, y2;
    int result;

    printf("Enter width and height (Seperated by space): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    printf("Width: %d\n", x1);
    printf("Height: %d\n", y1);
    printf("Width: %d\n", x2);
    printf("Height: %d\n", y2);

    result = x1 * y1 + x2 * y2;
    printf("The area is %d cm2\n", result);

    return 0;
}