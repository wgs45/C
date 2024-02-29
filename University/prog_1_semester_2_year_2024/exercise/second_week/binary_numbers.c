#include <stdio.h>

// ? decimal 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17
// ? octal 1 2 3 4 5 6 7 10 11 12 13 14
// ? hex 1 2 3 4 5 6 7 8 9 A B C D E F 10 11

int main() {
    int a = 3, b = 9, c = 13;

    // o => Octal numbers, X => Hexadecimal numbers
    printf("%o %o %X", a, b, c); // 3 11 D

    return 0;
}
