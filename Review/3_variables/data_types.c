#include <stdio.h>

int main() {
    // variables declaration
    short a;
    long b;
    long long c;
    long double d;

    // asigned int variable can hold value from (-231 -> 231)
    int e,f;
    // unsigned int variable can hold value from (0 -> 232)
    unsigned int x;
    int g;
    float h;

    // variable assignment
    e,f = 10, 20;

    // store value from (-32767 -> 32767)
    printf("Size of short = %d bytes\n", sizeof(a));
    printf("Size of long = %d bytes\n", sizeof(b));
    printf("Size of long long = %d bytes\n", sizeof(c));
    printf("Size of long double = %d bytes\n", sizeof(d));
    printf("Size of float = %d bytes\n", sizeof(h));
    printf("Size of int = %d bytes\n", sizeof(e));
    printf("Size of unsigned int = %d bytes\n", sizeof(x));

    c = a + b;
    printf("Value of c: %d\n", c);

    f = 70.0/3.0;
    printf("Value of f: %f\n", f);

    return 0;
}