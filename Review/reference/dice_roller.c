#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lower = 1, upper = 12, count = 6000;
    int occurrence[13] = {0}; // Initialize an array to count occurrences of each number (1-12).

    srand(time(0));
    
    for (int i = 0; i < count; i++) {
        int generated_num = (rand() % (upper - lower + 1)) + lower;
        occurrence[generated_num]++; // Increment the count for the generated number.
    }
    
    // Find and print occurrences.
    for (int i = 1; i <= 12; i++) {
        if (occurrence[i] > 0) {
            printf("%d occurs %d times\n", i, occurrence[i]);
        }
    }

    return 0;
}