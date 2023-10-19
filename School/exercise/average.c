#include <stdio.h>

int main() {
    int marks[10], x, num, sum = 0, average;

    printf("How many numbers: ");
    scanf("%d", &num);

    for (x = 0; x < num; x++) {
        printf("Enter the %d number: ", x+1);
        scanf("%d", &marks[x]);
        sum += marks[x];
    }

    average = sum / num;
    printf("Average: %d\n", average);

    return 0;
}
