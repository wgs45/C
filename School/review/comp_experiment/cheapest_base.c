#include <stdio.h>

// c program to find the cheapest base
// source: uva11005

// Array to store costs for each digit in different bases
int Cost[37];

// Function to calculate the cost of representing a number 'n' in base 'bs'
int CCost(int n, int bs) {
    int cost = 0;
    if (n == 0)
        return Cost[0];
    while (n) {
        cost += Cost[n % bs];
        n /= bs;
    }
    return cost;
}

// Function to calculate and print the cheapest base(s) for a set of numbers
void Cal() {
    int i, n, q, min, ind, c;
    int A[100];

    // Input number of queries
    scanf("%d", &q);

    while (q--) {
        // Input the number 'n'
        scanf("%d", &n);

        min = 9999999;
        ind = 0;

        // Loop through bases from 2 to 36
        for (i = 2; i < 37; i++) {
            c = CCost(n, i);

            // Check if cost is less than the minimum cost
            if (c < min) {
                A[0] = i;
                ind = 1;
                min = c;
            }
            // Check if cost is equal to the minimum cost
            else if (c == min) {
                A[ind++] = i;
            }
        }

        // Output the cheapest base(s) for the current number
        printf("Cheapest base(s) for number %d:", n);
        for (i = 0; i < ind; i++)
            printf(" %d", A[i]);
        printf("\n");
    }
}

// Main function
int main() {
    int ks, i, k = 1;

    // Input the number of test cases
    scanf("%d", &ks);

    while (ks--) {
        // Input costs for each digit in bases 2 to 36
        for (i = 0; i < 36; i++)
            scanf("%d", &Cost[i]);

        // Output the case number
        printf("Case %d:\n", k++);

        // Calculate and print cheapest base(s) for each query
        Cal();

        // Output newline if more test cases are remaining
        if (ks)
            printf("\n");
    }

    return 0;
}