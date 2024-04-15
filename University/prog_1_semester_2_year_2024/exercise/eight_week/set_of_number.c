#include <stdio.h>

int main() {
    int n = 0, i = 0, j = 0, count = 0;
    int numbers[100][5];

    printf("Enter the number of groups: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter group %d numbers: ", i + 1);
        for (j = 0; j < 5; j++) {
            scanf("%d", &numbers[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < 4; j++) {
            if (numbers[i][j] >= numbers[i][j + 1]) {
                count++;
                break;
            }
        }
    }

    printf("Number of non repeating numbers: %d\n", count);

    return 0;
}
