#include <stdio.h>

int main() {
    int sets_of_data;
    int x1, y1, a, b, c, r, s, t, n;

    printf("How many sets of test data: ");
    scanf("%d", &sets_of_data);

    printf("x1 = ");
    scanf("%d", &x1);
    printf("y1 = ");
    scanf("%d", &y1);
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    printf("r = ");
    scanf("%d", &r);
    printf("s = ");
    scanf("%d", &s);
    printf("t = ");
    scanf("%d", &t);
    printf("n = ");
    scanf("%d", &n);

    printf("n = 1, (x, y) = (%d, %d)\n", x1, y1);

    for (int i = 2; i < n+1; i++) {
        int result_1 = a * x1 + b * y1 + c;
        int result_2 = r * x1 + s * y1 + t;
        x1 = result_1;
        y1 = result_2;
        printf("n = %d, (x, y) = (%d, %d)\n", i, x1, y1);
    }

    printf("\n");

    int count = 0; // Initialize count

    while (sets_of_data > 1) {
        count++;

        printf("x1 = ");
        scanf("%d", &x1);
        printf("y1 = ");
        scanf("%d", &y1);
        printf("a = ");
        scanf("%d", &a);
        printf("b = ");
        scanf("%d", &b);
        printf("c = ");
        scanf("%d", &c);
        printf("r = ");
        scanf("%d", &r);
        printf("s = ");
        scanf("%d", &s);
        printf("t = ");
        scanf("%d", &t);
        printf("n = ");
        scanf("%d", &n);

        printf("n = 1, (x, y) = (%d, %d)\n", x1, y1);

        for (int i = 2; i < n+1; i++) {
            int result_1 = a * x1 + b * y1 + c;
            int result_2 = r * x1 + s * y1 + t;
            x1 = result_1;
            y1 = result_2;
            printf("n = %d, (x, y) = (%d, %d)\n", i, x1, y1);
        }

        if (count + 1 == sets_of_data) {
            break;
        } else {
            // do nothing
        }
    }

    return 0;
}