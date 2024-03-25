#include <stdio.h>
#include <stdbool.h>

int main() {
    int number_of_childrens, start_house, end_house, i, j;
    bool houses[101] = {false}; // keeps track of the house that has rung (First, initalize to false)

    printf("Enter the number of childrens: ");
    scanf("%d", &number_of_childrens);

    for (i = 0; i < number_of_childrens; i++) {
        printf("Enter the house number range for child %d: ", i + 1);
        scanf("%d %d", &start_house, &end_house);

        for (j = start_house; j <= end_house; j++) {
            houses[j] = true; // mark the house that has rung
        }
    }

    int count = 0;
    for (i = 0; i <= 100; i++) {
        if (houses[i]) {
            count++; // increment count for each houses that has rung
        }
    }

    printf("Total number of houses where the doorbell has been rung: %d\n", count);

    return 0;
} 
