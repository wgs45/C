#include <stdio.h>

// C program to find the average score

#define MAX_SIZE 5

int main() {
    int scores[MAX_SIZE]; // array to store scores
    float weight[MAX_SIZE], weight_sum = 0, average_score = 0; // arrays to store weights, and variables to store weight sum and average score
    int i = 0, j = 0; // loop counters

    // input scores
    for (i = 0; i < MAX_SIZE; i++) {
        scanf("%d", &scores[i]); // read scores from user input
    }

    // input weight
    for (j = 0; j < MAX_SIZE; j++) {
        scanf("%f", &weight[j]); // read weights from user input
        weight_sum += weight[j]; // calculate the sum of weights
    }

    for (i = 0; i < MAX_SIZE; i++) {
        average_score += (float) scores[i] * (weight[i] / weight_sum); // calculate the weighted sum of scores
    }

    printf("average score: %.2f\n", average_score); // print the average score

    return 0;
}
