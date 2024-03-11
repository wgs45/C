#include <stdio.h>

int main() {
    int n = 3; // Adjust this value to change the size of the diamond

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; ++k) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n - 2; i >= 0; --i) {
        for (int j = 0; j < n - i - 1; ++j) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; ++k) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
