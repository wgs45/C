#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void find_prime_arithmetic_sequences(int N1, int N2, int LENGTH) {
    int found = 0;

    for (int i = N1; i <= N2 - LENGTH + 1; i++) {
        for (int j = i + 1; j <= N2; j++) {
            int d = j - i;
            int prime = 1;
            int current = i;

            for (int k = 0; k < LENGTH; k++) {
                if (!is_prime(current)) {
                    prime = 0;
                    break;
                }
                current += d;
            }

            if (prime) {
                if (found == 0) {
                    // ! do nothing
                }
                for (int k = 0; k < LENGTH; k++) {
                    printf("%d", i + k * d);
                    if (k < LENGTH - 1) {
                        printf(",");
                    }
                }
                printf("\n");
                found = 1;
            }
        }
    }

    if (found == 0) {
        printf("0\n");
    }
}

int main() {
    int N1, N2, LENGTH;
    printf("Enter N1, N2, LENGTH: ");
    scanf("%d %d %d", &N1, &N2, &LENGTH);
    find_prime_arithmetic_sequences(N1, N2, LENGTH);

    return 0;
}
