#include <stdio.h>

int main() {
    int n = 9;

    // looping through
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (j == i) {
                printf("%d", j);
            } else {
                printf("%d ", j);
            }
        }
        printf("\n");
    }

    return 0;
}
