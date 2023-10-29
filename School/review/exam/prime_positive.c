#include <stdio.h>

int main() {
    int num;

    printf("Enter value: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
            if (i % 2 == 0) {
                // do nothing
            } else {
                printf("result %d\n", i);
            }
    }

    return 0;
}