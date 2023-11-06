#include <stdio.h>

// input positive integer then compute the number of prime numbers
// sample input:
// 1 2 3
// 1 3 5 7 9

// sample output:
// 2
// 3

// ! function prototype
int is_prime(int n);

int main() {
    int input, count = 0;

    // Loop to continuously take user input
    while (scanf("%d", &input) == 1) {
        // Check if the input number is prime
        if (is_prime(input)) {
            // Increment the count if the number is prime
            count++;
        }
    }

    // Print the count of prime numbers
    printf("%d\n", count);

    return 0;
}

int is_prime(int n) {
    // If the number is less than or equal to 1, it is not prime
    if (n <= 1) {
        return 0;
    }

    // Check if the number is divisible by any number from 2 to square root of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    // If the number is not divisible by any number from 2 to square root of n, it is prime
    return 1;
}