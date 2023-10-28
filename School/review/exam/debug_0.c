#include <stdio.h>

// ! function prototypes
int sum(int n1, int n2);

int main() {
    int n1 = 10, n2 = 20;

    printf("n1 + n2 = %d\n", sum(n1, n2));
    
    return 0;
}

int sum(int n1, int n2) {
    int c = n1 + n2;
    return c;
}