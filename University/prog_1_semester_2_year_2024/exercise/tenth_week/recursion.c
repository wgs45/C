#include <stdio.h>

void recursion(int n);

int main() {
    int n = 0;

    printf("Enter a value: ");
    scanf("%d", &n);

    recursion(n);

    return 0;
}

void recursion(int n) {
    if (n > 0) {
        recursion(n - 1);
        printf("%d ", n);
    }
}
