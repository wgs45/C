#include <stdio.h>

int fibonacci(int n);

int main() {
    int n = 0;

    printf("Enter a value: ");
    scanf("%d", &n);

    printf("Result: %d\n", fibonacci(n));

    return 0;
}

int fibonacci(int n) {
    int result = 0;

    if (n == 0 || n == 1) {
        return n;
    } else {
        return result = fibonacci(n - 1) + fibonacci(n - 2);
    } 
}
