#include <stdio.h>

// c program to find lottery number
// sample input
// 1 2 3 4 5 6
// 1 3 5 11 13 6

// sample output
// 2000

int main() {
    int lottery_numbers[6]; // Array to store the lottery numbers
    int winning_numbers[6]; // Array to store the winning numbers
    int i, j, count = 0; // Variables for loops and counting

    // Input the first set of numbers (lottery numbers)
    for (i = 0; i < 6; i++) {
        scanf("%d", &lottery_numbers[i]);
    }

    // Input the second set of numbers (winning numbers)
    for (i = 0; i < 6; i++) {
        scanf("%d", &winning_numbers[i]);
    }

    // Check for repeated numbers
    for (i = 0; i < 6; i++) {
        for (j = i + 1; j < 6; j++) {
            if (lottery_numbers[i] == lottery_numbers[j] || winning_numbers[i] == winning_numbers[j]) {
                printf("0");
                return 0;
            }
        }
    }

    // Count the number of common numbers
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (lottery_numbers[i] == winning_numbers[j]) {
                count++;
            }
        }
    }

    // Output the prize based on the count of common numbers
    if (count == 4) {
        printf("2000");
    } else if (count == 5) {
        printf("50000");
    } else if (count == 6) {
        printf("1000000");
    } else {
        printf("0");
    }

    return 0;
}