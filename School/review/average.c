#include <stdio.h>

int main() {
    // Initialize variables
    int a[100];
    int x = 0, count = 0, positive_num = 0;
    float count_num = 0;

    printf("Enter a list of numbers: ");
    while (scanf("%d", &a[x++]) != EOF) {
        printf("a[x++]: %d\n", a[x++]);
        printf("x: %d\n", x);
        count++;
        printf("count: %d\n", count);

        if(getchar() == '\n') {
            break;
        }
    }

    for (int y = 0; y < count; y++) {
        if (a[y] < 0) {
            printf("a[y]: %d\n", a[y]);
            continue;
        } else {
            positive_num += a[y];
            count_num++;
            printf("positive_num: %d\n", positive_num);
            printf("count_num: %f\n", count_num);
        }
    }

    printf("Average: %f", positive_num/count_num);

    return 0;
}