#include <stdio.h>

int main() {
    int num = 578, *ptr, **pptr;
    ptr = &num;
    pptr = &ptr;

    printf("value of num: %d\n", num);
    printf("value of num using single pointer: %d\n", *ptr);
    printf("value of num using double pointer: %d\n", **pptr);

    return 0;
}