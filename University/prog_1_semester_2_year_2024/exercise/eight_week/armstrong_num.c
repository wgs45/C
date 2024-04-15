#include <stdio.h>
#include <math.h>

int main() {
    int num = 0, original_num = 0, result = 0, remainder = 0, n = 0; 

    printf("Enter a number: ");
    scanf("%d", &num);

    original_num = num;

    while (original_num != 0) {
        original_num /= 10;
        ++n;
    }

    original_num = num;

    while (original_num != 0) {
        remainder = original_num % 10;
        result += pow(remainder, n);
        original_num /= 10;
    }

    if (result == num) {
        printf("%d is an armstrong number.\n", num);
    } else {
        printf("%d is not an armstrong number.\n", num);
    }

    return 0;
}
