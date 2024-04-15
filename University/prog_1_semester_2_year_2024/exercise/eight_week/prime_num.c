#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num);

int main() {
    int num = 0, i = 0;

    printf("Enter a value: ");
    scanf("%d", &num);

    printf("Prime numbers that are less than %d are: \n", num);
    for (i = 2; i < num; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
 
    return 0;
}

bool is_prime(int num) {
    int i;

    if (num <= 1) {
        return false;
    }

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}
