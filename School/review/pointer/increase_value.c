#include <stdio.h>

// Change the value of n to be n + d
void increaseBy(int *n, int d) {
    *n = *n + d;    // Dereference the pointer n and add d to its value
}

int main() {
    int *p, i = 19;   // Declare a pointer p and an integer i with initial value 19
    p = &i;   // Assign the address of i to pointer p

    increaseBy(p, 1);   // Call the increaseBy function with pointer p and value 1
    printf("%d\n", *p);   // Dereference pointer p and print its value

    return 0;
}