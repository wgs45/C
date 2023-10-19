// * Using the system header file stdbool. h allows you to use bool 
// * as a Boolean data type. true evaluates to 1 and false evaluates to 0 .
#include <stdio.h>
#include <stdbool.h>

// function prototypes
bool has_repeated_digits(int n);
int count_occurrences(int n, int digit);

int main() {
    int target = 1234; // This is the randomly generated number. Change it as needed.
    int guess;

    printf("Enter your guess: ");
    scanf("%d", &guess);

    if (has_repeated_digits(guess)) {
        printf("Illegal");
        return 0;
    }

    int A = 0, B = 0;
    for (int i = 0; i < 4; i++) {
        int targetDigit = target % 10;
        int guessDigit = guess % 10;
        if (targetDigit == guessDigit) {
            A++;
        } else {
            B += count_occurrences(guess, targetDigit);
        }
        target /= 10;
        guess /= 10;
    }

    printf("%dA%dB", A, B);
    return 0;
}

bool has_repeated_digits(int n) {
    bool digits[10] = {0};

    while (n > 0) {
        int digit = n % 10;
        if (digits[digit]) {
            return true;
        }
        digits[digit] = true;
        n /= 10;
    }

    return false;
}

int count_occurrences(int n, int digit) {
    int count = 0;

    while (n > 0) {
        int currentDigit = n % 10;
        if (currentDigit == digit) {
            count++;
        }
        n /= 10;
    }

    return count;
}