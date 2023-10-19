#include <stdio.h>

int main() {
    int a = 20;
    int b =  5;
    int c = 0;

    // && is AND operator
    if (a && b) {
        printf("Condition is true, because both a and b is not zero\n");
    }

    // || is OR operator
    if (a || b) {
        printf("Condition is true, because both a and b is not zero\n");
    }

    // ! is NOT operator
    if (!(a && c)) {
        printf("Condition is true, because Not reversed the logical condition\n");
    }

    return 0;
}