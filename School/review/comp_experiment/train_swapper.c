#include <stdio.h>

int main() {
    int num, len, train[50] = {0};
    int x, y, temp;

    scanf("%d", &num);

    // num-- is used to store the number of use cases
    // then it will loop over the number of use cases until it reaches 0
    // then the program stops
    while(num--) {
        scanf("%d", &len);

        int count = 0;

        for (x = 0; x < len; x++) {
            scanf("%d", &train[x]);
            printf("line 19 train[%d]: %d\n", x, train[x]);
        }

        for (x = 0; x < len; x++) {
            for (y = 0; y < len - 1 - x; y++) {
                if (train[x] > train[y + 1]) {
                    printf("line 25 train[%d]: %d\n", train[x]);
                    printf("line 26 train[%d]: %d\n", y + 1, train[y + 1]);
                    temp = train[x];
                    printf("line 28 temp: %d\n", temp);
                    train[x] = train[y + 1];
                    printf("line 30 train[%d]: %d\n", x);
                    train[y + 1] = temp;
                    printf("line 32 train[%d]: %d\n", y + 1);
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", count);
    }

    return 0;
}