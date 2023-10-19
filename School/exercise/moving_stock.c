#include <stdio.h>

int main() {
    int x = 0;
    float num, first, second;

    printf("Input: ");
    while(scanf("%f", &num) != EOF) {
        if (x == 0) {
            first = num;
            printf("0.0 ");
        } else if (x == 1) {
            second = num;
            printf("0.0 ");
        } else { // * Three or more numbers we get
            printf("Result: %f\n", (first + second) / 3);
            first = second;
            second = num;
        }
        x++;
    }

    return 0;
}