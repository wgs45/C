#include <stdio.h>

// ! function prototypes
int check_reverse(int num);

int main() {
    int num, reverse_num;
    int count = 0;

    // * enter original number
    scanf("%d %d", &num, &reverse_num);

    // * check if reverse number is valid
    if (check_reverse(num) == reverse_num) {
        count += 1;
        printf("%d\n", count);
    } else {
        count += 0;
        printf("%d\n", count);
    }

    return 0;
}

int check_reverse(int num) {
    int reverse_num = 0;

    while(num > 0) {
        reverse_num = reverse_num * 10 + num % 10;
        printf("reverse number: %d\n", reverse_num);
        num = num / 10;
        printf("num: %d\n", num);
    }

    return reverse_num;
}
