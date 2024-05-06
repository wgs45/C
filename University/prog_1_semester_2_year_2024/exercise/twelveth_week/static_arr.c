#include <stdio.h>

int *my_arr();

int main() {
    int *b, i;
    b = my_arr();

    for (i = 0; i < 5; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}

int *my_arr() {
    static int a[] = {1, 2, 3, 4, 5};
    return a;
}
