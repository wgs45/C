#include <stdio.h>

int main(void) {
    int a = 5; // Define integer variable
    int *ptr; // Define a pointer to integer
    int b; // Define an integer variable

    printf("ptr's value: %2d\n", *ptr);
    printf("ptr's address: %p\n", ptr);

    ptr = &a;
    b = a;
    a = 42;

    printf("a's value: %2d\n", a);
    printf("a's address: %p\n", &a);
    printf("ptr's value(a value): %2d\n", *ptr);
    printf("ptr's address(a value): %p\n", ptr);
    printf("b's value: %2d\n", b);
    printf("b's address: %p\n", &b);

    // find size of ptr
    printf("Size of ptr: %zu\n", sizeof(ptr));

    return 0;
}