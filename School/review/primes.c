#include <stdio.h>
#include <stdbool.h>

// function prototypes
bool isPrime(int num);
void findPrimeArithmeticSequences(int N1, int N2, int LENGTH);

int main() {
    int N1, N2, LENGTH;
    printf("Enter N1 N2 LENGTH (separated by whitespace): ");
    scanf("%d %d %d", &N1, &N2, &LENGTH);

    findPrimeArithmeticSequences(N1, N2, LENGTH);

    return 0;
}

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

void findPrimeArithmeticSequences(int N1, int N2, int LENGTH) {
    for (int a = N1; a <= N2; a++) {
        for (int b = a + 1; b <= N2; b++) {
            if (isPrime(a) && isPrime(b)) {
                int diff = b - a;
                if (diff >= 0) {
                    int current = b;
                    int count = 2;
                    while (count < LENGTH && current + diff <= N2 && isPrime(current + diff)) {
                        current += diff;
                        count++;
                    }
                    if (count == LENGTH) {
                        current = b;
                        printf("%d", a);
                        for (int i = 0; i < LENGTH - 1; i++) {
                            printf(",%d", current);
                            current += diff;
                        }
                        printf("\n");
                    }
                }
            }
        }
    }
}