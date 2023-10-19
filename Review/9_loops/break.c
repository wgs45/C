#include <stdio.h>

int main() {
    int a = 10;

    while (a > 20) {
        printf("Value of a: %d\n", a);
        a++;

        if (a > 15) {
            // terminate the loop statement
            break;
        }
    }

    return 0;
}