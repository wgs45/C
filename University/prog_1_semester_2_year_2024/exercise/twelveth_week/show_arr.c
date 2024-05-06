#include <stdio.h>

void show_arr(int arr[], int size);

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    show_arr(arr, 5);

    return 0;
}

void show_arr(int arr[], int size) {
    int i = 0;

    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
