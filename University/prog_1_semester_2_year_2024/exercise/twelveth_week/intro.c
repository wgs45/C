#include <stdio.h>

int main() {
    int arr[] = {4, 5, 6, 7 ,8};

    printf("%x\n", arr);
    printf("%d\n", *arr);
    printf("%d\n", *(arr + 2));

    return 0;
}

