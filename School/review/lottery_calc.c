#include <stdio.h>

int main() {
    int winningNumber = 1234; // * Assuming the winning number is 1234
    int userNumber;
    int prize = 0;

    printf("Enter your lottery number (a 4-digit number): ");
    scanf("%d", &userNumber);

    // * Checking if the user's number matches the winning number
    if (userNumber == winningNumber) {
        prize = 10000;
        printf("Congratulations! You've won the grand prize of $%d\n", prize);
    } else {
        // * Checking how many digits match
        int matchedDigits = 0;
        if (userNumber % 10 == winningNumber % 10) matchedDigits++;
        if ((userNumber / 10) % 10 == (winningNumber / 10) % 10) matchedDigits++;
        if ((userNumber / 100) % 10 == (winningNumber / 100) % 10) matchedDigits++;
        if ((userNumber / 1000) % 10 == (winningNumber / 1000) % 10) matchedDigits++;

        switch (matchedDigits) {
            case 1:
                prize = 10;
                break;
            case 2:
                prize = 100;
                break;
            case 3:
                prize = 1000;
                break;
            default:
                printf("Sorry, no prize this time. Better luck next time!\n");
        }

        if (prize > 0) {
            printf("Congratulations! You've won $%d\n", prize);
        }
    }

    return 0;
}
