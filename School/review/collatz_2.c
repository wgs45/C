#include <stdio.h>

int collatz_count(int num) {
    int count = 1;

    while (num > 1) {
        if (num % 2 == 0) {
            num /= 2;
        } else {
            num = num * 3 + 1;
        }
        count += 1;
    }

    return count;
}

int biggest_cycle(int x, int y) {
    int thisCycle;
    int a = 0;

    if(x > y){
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;
    }

    for(; x <= y; x++) {
        thisCycle = collatz_count(x);
        if(thisCycle > a){
            a = thisCycle;
        }
    }

    return a;
}

int main(){
    int n, m;
    
    printf("Enter 2 integers (Seperated by spaces): ");
    scanf("%d %d", &n, &m);
    printf("%d", biggest_cycle(n, m));

    return 0;
}