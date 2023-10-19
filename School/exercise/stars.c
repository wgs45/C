#include <stdio.h>

#define MAX_INPUT 100

int main() {
    int x = 0, y = 0, temp = 0, count = 0;
    int inputArray[MAX_INPUT];

    while (scanf("%d", &temp) != EOF) {
        inputArray[x] = temp;
        printf("inputArray[%d] = %d\n", x, inputArray[x]);
        printf("temp: %d\n", temp);
        x++;
        printf("x: %d\n", x);
        count++;
        printf("count: %d\n", count);
    }

    for (x = 0; x < count; x++) {
        for (y = 0; y < inputArray[x]; y++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}