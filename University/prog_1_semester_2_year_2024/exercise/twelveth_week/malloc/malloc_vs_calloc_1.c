#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 6, i = 0, *a, *b;

    a = (int*) malloc(sizeof(int) * n);
    b = (int*) calloc(sizeof(int), n);

    printf("From malloc: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("From calloc: ");
    for (i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    free(a);
    free(b);


    return 0;
}
