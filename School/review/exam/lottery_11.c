#include <stdio.h>

// Function prototype
int check_repeated(int arr[]);

int main() {
    // Declare variables
    int lottery[100][6]; // Array to store lottery numbers
    int draw[6]; // Array to store winning numbers
    int num, i, j, k;
    int ticketCount = 0, ticketOrder = 0; // Variables to keep track of ticket count and order
    int prize = 0; // Variable to store the total prize

    // Read lottery numbers until EOF (End of File)
    while(scanf("%d", &num) != EOF) {
        // If the ticket count reaches 6, increment the ticket order and reset the ticket count
        if (ticketCount == 6) {
            ticketCount = 0;
            ticketOrder++;
        }
        // Store the lottery numbers in the appropriate position in the lottery array
        lottery[ticketOrder][ticketCount++] = num;
    }

    // Copy the winning numbers from the last ticket order to the draw array
    for (j = 0; j < 6; j++) {
        draw[j] = lottery[ticketOrder][j];
    }

    // Iterate through each ticket order
    for (i = 0; i < ticketOrder; i++) {
        int match = 0; // Variable to keep track of the number of matching numbers

        // Check if any number in the ticket order is repeated
        if (check_repeated(lottery[i]) == 1) {
            match = 0;
        } else {
            // Compare each number in the ticket order with the winning numbers
            for (j = 0; j < 6; j++) {
                for (k = 0; k < 6; k++) {
                    if (lottery[i][j] == draw[k]) {
                        match++;
                    }
                }
            }
        }

        // Use a switch case to determine the prize based on the number of matching numbers
        switch (match) {
            case 3: prize += 400; break;
            case 4: prize += 1000; break;
            case 5: prize += 10000; break;
            case 6: prize += 40000; break;
            default: break;
        }
    }
    printf("Total prize: %d\n", prize);

    return 0;
}

// Function to check if any number in the array is repeated
int check_repeated(int arr[]) {
    int i, j;

    // Compare each number with the rest of the numbers in the array
    for(i = 0; i < 6; i++) {
        for (j = i + 1; j < 6; j++) {
            if (arr[i] == arr[j]) {
                return 1;
            }
        }
    }

    return 0;
}
