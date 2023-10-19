#include <stdio.h>

int main() {
    int num;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        do {
            if (num < 100) {
                num += 1;
                printf("Result: %d\n", num);
            }
        } while(num < 100);
    } while(num < 100);

    return 0;
}

