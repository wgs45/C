#include <stdio.h>

// ! function prototypes
int calculateSum(int n);

int main() {
    int n;

    scanf("%d", &n);

    if (n < 0) {
        return 1;
    }

    printf("%d\n", calculateSum(n));

    return 0;
}

// This function calculates the sum of squares from 1 to n
int calculateSum(int n) {
    // Base case: when n becomes 0, return 0
    if (n == 0) {
        return 0;
    } else {
        // Recursive case: calculate sum for n-1 and add n*n
        return calculateSum(n - 1) + (n * n);
    }
}
