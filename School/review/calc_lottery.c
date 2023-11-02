#include <stdio.h>

// Define the length of the lottery numbers and the total number of lottery numbers
#define LENGTH 6
#define LOTTERY 49

// Initialize arrays to store the jackpot numbers and ticket numbers
int jackpot[LENGTH];
int ticket[100][LENGTH];

// Initialize variables to keep track of the total prize and loop counters
int total_prize = 0, i = 0, j, k, numbers;

int main() {
    // Read input ticket numbers until the end of the file (EOF)
    while(scanf("%d %d %d %d %d %d", &ticket[i][0], &ticket[i][1], &ticket[i][2], &ticket[i][3], &ticket[i][4], &ticket[i][5]) != EOF){
        i++;
    }
    i--;

    // Set the jackpot numbers to the last ticket entered
    for(int j = 0; j < 6; j++){
        jackpot[j] = ticket[i][j];
    }

    // Loop through each ticket and check if it matches the jackpot numbers
    int x = 0;
    while(x < i) {
        numbers = 0;
        for (k = 0; k < LENGTH; k++) {
            for (j = 0; j < LENGTH; j++) {
                // Check if the ticket number at position k matches the jackpot number at position j
                if (ticket[x][k] == jackpot[j]) {
                    numbers++;
                    break;
                }
            }
        }

        // Determine the prize based on the number of matching numbers
        if (numbers == 3){
            total_prize += 400;
        } else if (numbers == 4){
            total_prize += 1000;
        } else if (numbers == 5){
            total_prize += 10000;
        } else if (numbers == 6){
            total_prize += 100000;
        }
        x++;
    }

    // Print the total prize
    printf("%d\n", total_prize);

    return 0;
}