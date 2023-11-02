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
        }

        for (x = 0; x < len; x++) {
            for (y = 0; y < len - 1 - x; y++) {
                if (train[x] > train[y + 1]) {
                    temp = train[x];
                    train[x] = train[y + 1];
                    train[y + 1] = temp;
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", count);
    }

    return 0;
}
