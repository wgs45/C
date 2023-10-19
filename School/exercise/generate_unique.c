#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, temp, digit_1, digit_2, digit_3, digit_4;
    srand(time(NULL)); // to get unique number each time

    while(1) {
        // generate 4 single digit number
        digit_1 = rand() % 10;
        digit_2 = rand() % 10;
        digit_3 = rand() % 10;
        digit_4 = rand() % 10;

        if (digit_1 != digit_2 && digit_1 != digit_3 && digit_1 != digit_4) {
            if (digit_2 != digit_3 && digit_2 != digit_4) {
                if (digit_3 != digit_4) {
                    break;
                }
            }
        }
    }

    printf("Generate random unique number: %d %d %d %d\n", digit_1, digit_2, digit_3, digit_4);

    return 0;
}