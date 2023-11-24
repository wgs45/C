#include <stdio.h>

// ! e, f ,c
// ? e: empty, f: fill, c: change

// * example input:
// 2
// 9 0 3
// 5 5 2

// * example output:
// 4
// 9

int main() {
    int use_cases;

    scanf("%d", &use_cases);

    while(use_cases--) {
        int e, f, c;
        scanf("%d %d %d", &e, &f, &c);
        e += f;

        int result = 0;
        while (e >= c) {
            result += e / c;
            e = e % c + e / c;
        }
        printf("%d\n", result);
    }

    return 0;
}