#include <stdio.h>

int main() {
    int user_input = 0, result = 0, true = 1, false = 0;

    printf("Enter a value: ");
    scanf("%d", &user_input);

    if (user_input % 7 == 0) {
        printf("%d\n", true);
    } else {
        printf("%d\n", false);
    }

    return 0;
}
