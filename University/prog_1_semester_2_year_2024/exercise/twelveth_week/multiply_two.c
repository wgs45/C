#include <stdio.h>

void multiple_two(int *ax, int size);

int main() {
    int arr[3] = {1, 2, 3}, i = 0;
    
    multiple_two(arr, 3);

    for(i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void multiple_two(int *ax, int size) {
    int i = 0;

    for(i = 0; i < size; i++) {
        ax[i] = ax[i] * 2;
    }
}
