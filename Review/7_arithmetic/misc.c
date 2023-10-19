#include <stdio.h>

int main() {
    int a = 4;
    short b;
    double c;
    int* ptr;

    // example of sizeof operator
    printf("Size of variable a: %zu\n", sizeof(a));
    printf("Size of variable b: %zu\n", sizeof(b));
    printf("Size of variable c: %zu\n", sizeof(c));

    // example of & and * operators
    ptr = &a; // ! ptr now contains the address of a
    printf("Value of variable a: %d\n", a);
    printf("*ptr is: %d\n", *ptr);

    // example of ternary operator
    a = 10;
    // any variable = (if (any variable) == condition) ? true : false
    b = (a == 1) ? 20 : 30;
    printf("Value of b is %d\n", b);

    b = (a == 10) ? 20 : 30;
    printf("Value of b is %d\n", b);

    return 0;
}