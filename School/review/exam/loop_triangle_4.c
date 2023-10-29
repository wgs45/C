#include <stdio.h>

int main() {
    int n = 9;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i; j++) {
            printf("    ");
        }

        // Print decreasing numbers
        for (int k = i; k >= 1; k--) {
            printf("%2d  ", k);
        }

        printf("\n");
    }

    return 0;
}
