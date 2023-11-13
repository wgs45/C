#include <stdio.h>

// c program to find gcd of two positive integers
// sample input:
// 24 36

//sample output:
// 12

// ! Function prototype
int find_gcd(int x, int y);

int main() {
    int x, y;

    // Read two integers from the user
    scanf("%d %d", &x, &y);

    // Check if x is less than y
    if (x < y) {
        // If true, swap the values of x and y and calculate the gcd
        printf("%d\n", find_gcd(y, x));
    } else {
        // If false, calculate the gcd using the original values of x and y
        printf("%d\n", find_gcd(x, y));
    }

    return 0;
}

// Function to find the greatest common divisor (gcd) of two positive integers
int find_gcd(int x, int y) {
    int result;

    // Check if y is 0, which means x is the gcd
    if (y == 0) {
        return x;
    } else {
        // Calculate the gcd recursively using the modulo operator
        result = find_gcd(y, x % y);
    }

    return result;
}