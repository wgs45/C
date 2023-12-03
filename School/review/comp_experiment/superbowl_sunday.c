#include <stdio.h>

// c program to predict superbowl sunday final score
// source: uva10812

int main() {
    // Declare variables
    int n;  // Number of test cases
    long long int sum, dif;  // Sum and difference of two numbers
    long long int a, b;  // The two numbers

    // Get the number of test cases from the user
    scanf("%d", &n);

    // Process each test case
    for (int i = 0; i < n; i++) {
        // Get the sum and difference of two numbers from the user
        scanf("%lld %lld", &sum, &dif);

        // Calculate the two numbers using the sum and difference
        a = (sum + dif) / 2;
        b = (sum - dif) / 2;

        // Check if the calculated numbers are valid
        if ((sum + dif) % 2 == 1 || (sum - dif) % 2 == 1 || a < 0 || b < 0) {
            // If the numbers are not valid, print "impossible"
            printf("impossible\n");
        } else {
            // If the numbers are valid, print the two numbers
            printf("%lld %lld\n", a, b);
        }
    }

    return 0;
}