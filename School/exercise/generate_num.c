#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, random;

    for (i = 0; i < 9; i++) {
        random = rand();
        printf("Random number %d: %d\n", i + 1, random);
    }

    return 0;
}