#include <stdio.h>
#include <string.h>

void swap(char *a, char *b);
void permutate(char *str, int left, int right);

int main() {
    int len = 0;
    printf("Input len: ");
    scanf("%d", &len);

    char input[len + 1];
    printf("Enter a string: ");
    scanf("%s", input);

    permutate(input, 0, len - 1);

    return 0;
}

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permutate(char *str, int left, int right) {
    int i = 0;

    if (left == right) {
        printf("%s ", str);
        return;
    }

    for (i = left; i <= right; i++) {
        swap((str + left), (str + i));
        permutate(str, left + 1, right);
        swap((str + left), (str + i));
    }
}
