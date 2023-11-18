#include <stdio.h>

// c program to solve tower of hanoi problem

// Function prototype
void towerOfHanoi(int numDisks, char source, char destination, char auxiliary);

int main() {
    // Number of disks
    int numDisks = 4;

    // Call the towerOfHanoi function with the initial parameters
    towerOfHanoi(numDisks, 'A', 'C', 'B');

    // Exit the program
    return 0;
}

void towerOfHanoi(int numDisks, char source, char destination, char auxiliary) {
    // Base case: If there is only one disk, move it directly to the destination rod
    if (numDisks == 1) {
        // Print the move
        printf("Move disk 1 from rod %c to rod %c\n", source, destination);

        // Return from the function
        return;
    }

    // Move (numDisks-1) disks from source to auxiliary rod
    towerOfHanoi(numDisks - 1, source, auxiliary, destination);

    // Move the remaining disk from source to destination rod
    printf("Move disk %d from rod %c to rod %c\n", numDisks, source, destination);

    // Move (numDisks-1) disks from auxiliary to destination rod
    towerOfHanoi(numDisks - 1, auxiliary, destination, source);
}