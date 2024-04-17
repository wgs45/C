#include <stdio.h>

int main() {
    int histogram[5] = {0};
    int num;

    printf("Enter a sequence of numbers between 1 and 5 (press Ctrl+Z to end):\n");

    // Read numbers and update histogram
    while (scanf("%d", &num) != EOF) {
        if (num >= 1 && num <= 5) {
            histogram[num - 1]++;
        }
    }

    // Display histogram
    printf("\nHistogram:\n");
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < histogram[i]; ++j) {
            printf("＊");
        }
        printf("\n");
    }
    printf("１２３４５\n");

    return 0;
}
