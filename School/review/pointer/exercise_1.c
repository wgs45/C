#include <stdio.h>

#define MAX 10

int main() {
    // Declare an array of size MAX and initialize it with values 1 to 10
    int a[MAX] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    // Declare two pointers, p and q, and initialize them to the first and last element of the array
    int *p = &a[0], *q = &a[MAX - 1], temp;

    // Perform swapping of elements using the pointers until p becomes equal to or greater than q
    while(p < q) {
        // Swap the values pointed by p and q
        temp = *p;
        *p++ = *q;
        *q-- = temp;
    }

    // Print the final result after swapping
    printf("Final result: ");
    for(int i = 0; i < MAX; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}