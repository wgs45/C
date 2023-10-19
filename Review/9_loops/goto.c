#include <stdio.h>

int main() {
    int a = 10;

    LOOP:do {
        if (a == 15) {
            // skip the iteration
            a += 1;
            goto LOOP;
        }

        printf("Value of a: %d\n", a);
        a++;
    } while(a < 20);

    return 0;
}