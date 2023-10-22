#include <stdio.h>

// program to find conjectured algorithm sequences
// this program is using recursive algorithm
// concept
// if n is odd then 3n + 1
// else n is even then n/2

// example input:
// 1 10
// 100 200
// 201 210
// 900 1000
// example output:
// 1 10 20
// 100 200 125
// 201 210 89
// 900 1000 174

// function prototype
int recursive(int x, int count);

int main() {
    int a = 0, b = 0;

    while(scanf("%d %d", &a, &b) != EOF) {
        int index = 0;
        int max = 0;

        printf("%d %d", a, b);
        if (b < a) {
            int c = a;
            a = b;
            b = c;
        }

        int temp = 0;

        while(a + index <= b) {
            int count = 1;
        temp = recursive(a + index, count);
        if (max < temp) max = temp;
        index++;
        }
        printf(" %d \n", max);
    }
}

int recursive(int x, int count) {
    if (x == 1) {
        return count;
    }
    count++;

    if (x % 2 == 0) { // even
        return recursive(x / 2, count);
    } else { // odd
        return recursive(3 * x + 1, count);
    }
}