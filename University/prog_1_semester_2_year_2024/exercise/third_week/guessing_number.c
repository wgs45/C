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
        int index = rand() % (10 - i); // generates a random index within the remaining numbers

        randomarray[i] = digits[index]; // stores the random selected digit in variable randomarray
        
        digits[index] = digits[9 - i]; // replace the selected digits with the last digits in variable digit array to avoid duplicatied digits in randomarray 

        random_number = random_number * 10 + randomarray[i]; // Constructs the 4-digit random number.

    }

    printf("random number: %d\n", random_number);

    while (1) {
        printf("Insert a number: ");
        int user_input;
        scanf("%d", &user_input);

        int user_array[4];
    
        // convert user inpu to array
        for (int i = 3; i >= 0; i--) {
            user_array[i] = user_input % 10;
            user_input /= 10;
        }

        int A = 0, B = 0;

        // Calculate A (Correct Digits in Correct Positions) and B (Correct Digits in Wrong Positions)
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
            break;
        }
    }

    return 0;
}
