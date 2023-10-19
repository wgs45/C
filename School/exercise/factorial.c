#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;
    printf("Enter the number: ");
    scanf("%d", &n);

    i = n;
    if (n < 0) {
        printf("Invalid value");
    } else {
        while (i > 1) {
            factorial *= i;
            i--;
        }
        printf("Factorial of %d: %llu", n, factorial);
    }

    return 0;
}