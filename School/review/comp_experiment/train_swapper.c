#include <stdio.h>

int main() {
    // Declare variables
    int num, len, train[50] = {0};
    int x, y, temp;

    // Read the number of use cases
    scanf("%d", &num);

    // num-- is used to store the number of use cases
    // then it will loop over the number of use cases until it reaches 0
    // then the program stops
    while(num--) {
        // Read the length of the train
        scanf("%d", &len);

        // Initialize a counter to keep track of the number of swaps
        int count = 0;

        // Read the train numbers
        for (x = 0; x < len; x++) {
            scanf("%d", &train[x]);
        }

        // Sort the train numbers using the bubble sort algorithm
        for (x = 0; x < len; x++) {
            for (y = 0; y < len - 1 - x; y++) {
                // Compare adjacent numbers and swap if necessary
                if (train[x] > train[y + 1]) {
                    temp = train[x];
                    train[x] = train[y + 1];
                    train[y + 1] = temp;
                    count++;
                }
            }
        }

        // Print the number of swaps needed for the optimal train swapping
        printf("Optimal train swapping takes %d swaps.\n", count);
    }

    // End of the program
    return 0;
}