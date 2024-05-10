#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0, m = 0, i = 0, *arr;
    
    printf("Enter N and M value (seperated with space): ");
    scanf("%d %d", &n, &m);
    arr = (int *) malloc (sizeof(int) * n);

    for (i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
 
    printf("\n");

    return 0;
}
