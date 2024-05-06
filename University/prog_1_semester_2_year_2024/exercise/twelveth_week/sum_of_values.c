#include <stdio.h>

void func(int *pp);

int main() {
    int a = 3;
    int *p;

    p = &a;
    func(p);

    printf("%d", a);

    return 0;
}

void func(int *pp) {
    *pp = *pp + 1;
}
