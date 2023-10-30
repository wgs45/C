#include<stdio.h>

int main() {
    int num;

    printf("Input number: ");
    scanf("%d", &num);

    while(num > 0) {
        // Split last digit from number
        int mod = num % 10;

        printf("%d\n",mod);
        // Divide num by 10. num /= 10 also a valid one
        num = num / 10;
    }

    return 0;
}