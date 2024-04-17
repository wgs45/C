#include <stdio.h>

int main() {
    int num1 = 0, num2 = 0, i = 0;

    printf("Enter first value and second value (seperateed with space): ");
    scanf("%d %d", &num1, &num2);

    for (i = num1; i <= num2; i++) {
        printf("%d\n", i);
    }


    return 0;
}
