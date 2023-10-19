#include <stdio.h>

int cycleNum(int num);

int findNum(int a, int b);

int main() {
    int a, b;

    while(scanf("%d %d", &a, &b) != EOF) {
        printf("%d %d %d\n", a, b, findNum(a, b));
    }

    return 0;
}

// function check if num is odd or even
// then cycle the number
int cycleNum(int num) {
    int count = 1;

    while (num != 1) {
        if (num % 2 == 0) {
            num = num / 2;
        } else {
            num = num * 3 + 1;
        }
        count++;
    }
    return count;
}

int findNum(int a, int b) {
    int temp, maxSize, currentSize;

    // check num then place them in the correct order
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    // for loop
    for(; a <= b; a++) {
        currentSize = cycleNum(a);
        if (currentSize > maxSize) {
            maxSize = currentSize;
        }
    }
    return maxSize;
}
