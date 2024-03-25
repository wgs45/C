#include <stdio.h>

int main() {
    int input = 0;
    int arr[4];

    arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40;

    int i = 3;

    printf("arr[%d] = %d\n", i, arr[i]);

    int arr_2[100] = {11, 12, 13};

    printf("arr_2[100]: %d ", arr_2[99]);

    int arr_3[1000] = {0};

    printf("arr_3[1000]: %d ", arr_3[0]);

    return 0;
}