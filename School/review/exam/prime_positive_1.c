#include <stdio.h>
#include <stdbool.h>

// This program prints the first 10 prime numbers greater
// than or equal to the input number.

// Function prototype
bool is_prime(int input);

int main() {
    int input;
    // printf("Enter an number: ");
    scanf("%d", &input);

    int count = 0;
    while(count < 10) {
        if(is_prime(input) == true) {
            printf(" %d", input);
            count++;
        }
        input++;
    }

    return 0;
}

// Function to check if a number is prime
bool is_prime(int input) {
    if (input <= 1) {
        return false;
    }

    // Check if the number is divisible by any number from 2 to the half of the input number
    for(int i = 2; i < input / 2; i++) {
        if (input % i == 0) {
            return false;
        }
    }

    return true;
}