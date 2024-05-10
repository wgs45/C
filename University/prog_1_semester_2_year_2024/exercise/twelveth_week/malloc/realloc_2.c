#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0, m = 0, i = 0, *arr;

    printf("Enter the value of M & N: ");
    scanf("%d %d", &m, &n);

    arr = (int*) malloc(sizeof(int) * n);
    for (i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    arr = (int*) realloc(arr, sizeof(int) * m);
    for (i = 0; i < m; i++) {
        arr[i] = i + 1;
    }

    for (i = 0; i < m; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
