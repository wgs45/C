#include <stdio.h>

int main() {
    int n, tmp; // Declare variables n (number of commands) and tmp (temporary variable)
    char cmd[128]; // Declare character array cmd to store commands

    while(scanf("%d", &n) == 1 && n) { // Read the value of n until it is 0 or invalid
        int dice[6] = {1,2,3,4,5,6}; // Initialize an array dice with values 1 to 6

        while(n--) { // Execute the following block n times
            scanf("%s", cmd); // Read a command into the cmd array

            if(cmd[0] == 'n') { // If the first character of the command is 'n'
                tmp = dice[1], dice[1] = dice[0]; // Swap values of dice[1] and dice[0], store dice[1] in tmp
                dice[0] = dice[4], dice[4] = dice[5]; // Swap values of dice[0], dice[4], and dice[5]
                dice[5] = tmp; // Assign tmp to dice[5]
            } else if(cmd[0] == 's') { // If the first character of the command is 's'
                tmp = dice[1], dice[1] = dice[5]; // Swap values of dice[1] and dice[5], store dice[1] in tmp
                dice[5] = dice[4], dice[4] = dice[0]; // Swap values of dice[5], dice[4], and dice[0]
                dice[0] = tmp; // Assign tmp to dice[0]
            } else if(cmd[0] == 'e') { // If the first character of the command is 'e'
                tmp = dice[3], dice[3] = dice[0]; // Swap values of dice[3] and dice[0], store dice[3] in tmp
                dice[0] = dice[2], dice[2] = dice[5]; // Swap values of dice[0], dice[2], and dice[5]
                dice[5] = tmp; // Assign tmp to dice[5]
            } else { // If the first character of the command is not 'n', 's', or 'e'
                tmp = dice[3], dice[3] = dice[5]; // Swap values of dice[3] and dice[5], store dice[3] in tmp
                dice[5] = dice[2], dice[2] = dice[0]; // Swap values of dice[5], dice[2], and dice[0]
                dice[0] = tmp; // Assign tmp to dice[0]
            }
        }
        printf("%d\n", dice[0]); // Print the value of dice[0]
    }
    return 0;
}