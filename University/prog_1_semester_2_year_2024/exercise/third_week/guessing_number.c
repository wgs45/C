#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int digits[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int randomarray[4];
    int random_number = 0;

    // seed generator
    srand(time(NULL));

    // random number generator
    for (int i = 0; i < 4; i++) {
        int index = rand() % (10 - i);

        randomarray[i] = digits[index];
        
        // Swap the selected digit with the last digit to avoid duplicates
        int temp = digits[index];
        digits[index] = digits[9 - i];
        digits[9 - i] = temp;

        random_number = random_number * 10 + randomarray[i];
    }

    printf("random number: %d\n", random_number);

    while (1) {
        printf("Insert a number: ");
        int user_input;
        scanf("%d", &user_input);

        // Check if user input is valid
        if (user_input < 1000 || user_input > 9999) {
            printf("Invalid input. Please enter a 4-digit number.\n");
            continue;
        }

        int user_array[4];
    
        // Convert user input to array
        for (int i = 3; i >= 0; i--) {
            user_array[i] = user_input % 10;
            user_input /= 10;
        }

        int A = 0, B = 0;

        // Calculate A and B
        for (int i = 0; i < 4; i++) {
            if (user_array[i] == randomarray[i]) {
                A++;
            } else {
                for (int j = 0; j < 4; j++) {
                    if (user_array[i] == randomarray[j]) {
                        B++;
                        break;
                    }
                }
            }
        }

        printf("The result: %dA%dB\n", A, B);

        if (A == 4) {
            printf("Congratulations! You guessed the number.\n");
            break;
        }
    }

    return 0;
}
