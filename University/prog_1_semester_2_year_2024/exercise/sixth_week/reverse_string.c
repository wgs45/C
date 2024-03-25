#include <stdio.h>

int main() {
    int num = 12345, reversed = 0;

    while(num > 0) {
        int last_digits = num % 10;
        reversed = reversed * 10 + last_digits;
        num /= 10;
    }

    printf("%d\n", reversed);

    return 0;
}
