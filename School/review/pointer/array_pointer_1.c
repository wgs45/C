#include <stdio.h>

int main() {
    int *p;             // Declare a pointer variable 'p'
    int (*ptr)[5];      // Declare a pointer to an array of 5 integers 'ptr'
    int arr[5];         // Declare an array of 5 integers 'arr'

    p = arr;            // Assign the address of 'arr' to 'p'
    ptr = &arr;         // Assign the address of 'arr' to 'ptr'

    printf("p = %p, ptr = %p\n", p, ptr);  // Print the values of 'p' and 'ptr'

    p++;                // Increment the value of 'p' by 1
    ptr++;              // Increment the value of 'ptr' by 1 (increments the address by the size of the array)

    printf("p = %p, ptr = %p\n", p, ptr);  // Print the updated values of 'p' and 'ptr'

    return 0;
}