#include <stdio.h>

void pattern(int n);

int main() {
    int n = 0;

    printf("Enter a value: ");
    scanf("%d", &n);

    pattern(n);

    return 0;
}

void pattern(int n) {
    int i = 0, j = 0;
    
    for (i = n; i >= 1; i--) {
        // print blank spaces
        for (j = 0; j <= n - i; j++) {
            printf(" ");
        }

        // print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
