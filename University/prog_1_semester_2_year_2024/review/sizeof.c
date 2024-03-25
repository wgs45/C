#include <stdio.h>

int main() {
    int a, arr[10];
    long int b;
    long long c;
    double d, d_arr[10];
   
    printf("All size are in bits\n");

    printf("sizeof int: %lu\n", sizeof(a));

    printf("sizeof long int: %lu\n", sizeof(b));

    printf("sizeof long long: %lu\n", sizeof(c));

    printf("sizeof double: %lu\n", sizeof(d));

    printf("size of arr: %lu\n", sizeof(arr));

    printf("sizeof d_arr: %lu\n", sizeof(d_arr));

    float input_1 = 3.5;

    int input_2 = (int)(input_1 + 0.5);

    printf("result: %d\n", input_2);

    return 0;
}
