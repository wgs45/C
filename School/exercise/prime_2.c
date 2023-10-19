#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_prime(int n);

int main() {
    int num, count = 0;

    printf("Input number: ");
    while (scanf("%d", &num) != EOF) {
        if (is_prime(num)) {
            count++;
        }
    }
    printf("The number of prime numbers in the input is: %d\n", count);
    return 0;
}

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}