#include <stdio.h>

int main() {
    int n = 0, result = 0, i = 0;

    printf("Enter a value: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
