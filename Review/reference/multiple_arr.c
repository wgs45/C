#include <stdio.h>

int main() {
    int arr_size;

    while(1) {
        printf("How many numbers: ");
        scanf("%d", &arr_size);
        if(arr_size > 0) {
            break;
        }
    }

    int arr[arr_size];
    printf("Please input numbers: ");
    for (int i = 0; i < arr_size; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    int multiplier = 0;
    printf("Check which number's multiples? ");
    scanf("%d", &multiplier);

    for (int i = 0; i < arr_size; i++) {
        if (arr[i] % multiplier == 0) {
            printf("a[%d] = %d\n", i, arr[i]);
            count++;
        }
    }

    if (count > 1) {
        printf("Found %d multiple(s).\n", count);
    } else {
        printf("Found %d multiple.\n", count);
    }

    return 0;
}