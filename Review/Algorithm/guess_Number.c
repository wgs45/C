#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// function prototype
void guess(int N);

int main() {

    int N = 1878;

    guess(N);

    return 0;
}

void guess(int N) {
    int number, guess;


    // generate random number
    // Divide generated number by N 
    // ex: input: 1878, output: 1783 
    number = rand() % N;
    // printf("Generated number: %d", number);

    printf('Guess a number between 1-9: %d\n', N);
    
    // do-while loop
    // will keep the player guess until it reaches the correct number
    do {
        // capture user input
        scanf("%d", &guess);

    } while (guess != number);
}