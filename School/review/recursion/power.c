#include <stdio.h>

// c program to compute power to number
// formula: number ^ k
// sample input:
// 2 2

// sample output:
// 4

// ! function prototypes
int power(int num, int k);

int main() {
    int num = 2, k = 2;

    // Print the result of power(num, k)
    printf("%d\n", power(num, k));

    return 0;
}

int power(int num, int k) {
    int result;

    // Base case: if k is 1, return the number itself
    if (k == 1) {
        return num;
    } else {
        // Recursive case: multiply the number with the result of power(num, k-1)
        result = num * power(num, k - 1);
    }

    return result;
}