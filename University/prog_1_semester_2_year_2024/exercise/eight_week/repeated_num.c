#include <stdio.h>

int main() {
    int set_1[6], set_2[6], count = 0, i = 0, j = 0;

    printf("Enter values for group 1: ");
    for (i = 0; i < 6; i++) {
        scanf("%d", &set_1[i]);
    }

    printf("Enter values for group 2: ");
    for (j = 0; j < 6; j++) {
        scanf("%d", &set_2[j]);
    }

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (set_1[i] ==  set_2[j]) {
                count++;
                break;
            }
        }
    } 

    printf("Total of the same value in both variables are: %d\n", count);

    return 0;
}
