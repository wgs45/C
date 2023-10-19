#include <stdio.h>

int main() {
    int a = 10;

    do {
        if (a == 15) {
        // Skip the iteration
        // a = a + 1 is similar to a += 1
        a += 1;
        continue;
    }

    printf("Value of a: %d\n", a);
    a++;
    } while (a < 20);

    return 0;
}