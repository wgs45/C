#include <stdio.h>

// ! e, f ,c
// ? e: empty, f: fill, c: change

// * example input:
// 2
// 9 0 3
// 5 5 2

// * example output:
// 4
// 9

int main() {
    // Declare a variable to hold the number of use cases
    int use_cases;

    // Read the number of use cases from the input
    scanf("%d", &use_cases);

    // Iterate over each use case
    while(use_cases--) {
        // Declare variables to hold the values for e, f, and c
        int e, f, c;

        // Read the values for e, f, and c from the input
        scanf("%d %d %d", &e, &f, &c);

        // Add the value of f to e
        e += f;

        // Declare a variable to hold the result
        int result = 0;

        // Loop until e becomes less than c
        while (e >= c) {
            // Add the maximum number of times c can divide e to the result
            result += e / c;

            // Update the value of e by taking the remainder of e divided by c and adding the quotient of e divided by c
            e = e % c + e / c;
        }

        // Print the result
        printf("%d\n", result);
    }

    // Return 0 to indicate successful execution
    return 0;
}