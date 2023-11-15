#include <stdio.h>

// c program
// source: uva 10055

// sample input:
// 10 12
// 10 14
// 100 200

// sample output:
// 2
// 4
// 100

int main() {
    // Declare variables to store the input values
    long long int a, b;

    // Read pairs of numbers until the end of input (EOF)
    while(scanf("%lld %lld", &a, &b) != EOF) {
        // Check if the value of 'a' is greater than 'b'
        if(a > b) {
            // If 'a' is greater, print the difference between 'a' and 'b'
            printf("%lld\n", a - b);
        } else {
            // If 'b' is greater or equal to 'a', print the difference between 'b' and 'a'
            printf("%lld\n", b - a);
        }
    }

    return 0;
}