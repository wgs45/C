#include <stdio.h>
#include <stdbool.h>

int count_doorbells(int children, int range[][2]) {
    int i = 0, j = 0;
    int doorbells[101] = {0}; // array to keep track of doorbell rings
    
    for (i = 0; i < children; i++) {
        for (j = range[i][0]; j <= range[i][1]; j++) {
            doorbells[j] = 1; // mark the house as rang
        }
    }

    int count = 0;
    for (i = 0; i <= 100; i++) {
        if (doorbells[i] == 1) {
            count++;
        }
    } 

    return count;
}

int main() {
    int children = 0, range[100][2], result = 0, i = 0;

    // input
    printf("Enter the number of childrens: ");
    scanf("%d", &children);

    for (i = 0; i < children; i++) {
        printf("Enter the range of house for children group %d: \n", i + 1);
        scanf("%d %d", &range[i][0], &range[i][1]);
    }

    // calculate
    result = count_doorbells(children, range);
    printf("Result: %d\n", result);

    return 0;
}
