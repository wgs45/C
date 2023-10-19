#include <stdio.h>

void swap(int *x, int *y);

int main() {
    int a = 100;
    int b = 200;

    printf("Before swap, value of a: %d\n", a);
    printf("Before swap, value of b: %d\n", b);

    swap(&a, &b);

    printf("After swap, value of a: %d\n", a);
    printf("After swap, value of b: %d\n", b);

    return 0;
}

void swap(int *x, int *y) {
    int temp;
    printf("%d\n", temp);
    temp = *x;
    printf("%d\n", temp);
    *x = *y;
    printf("%d\n", *x);
    *y = temp;
    printf("%d\n", *y);

    return;
}