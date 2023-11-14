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

int calculateSum(int n) {
    int result;

    if (n == 0) {
        return 0;
    } else {
        result = calculateSum(n - 1) + (n * n);
    }

    return result;
}
