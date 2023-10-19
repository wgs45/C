#include <stdio.h>

int main() {
    int a = 100;
    int b = 200;

    switch(a) {
        case 100:
            printf("(case 100) -> This is part of outer switch\n");
        
        switch(b) {
            case 200:
                printf("(case 200) -> This is part of inner switch\n");
        }
    }

    printf("Exact value of a is %d\n", a);
    printf("Exact value of b is %d\n", b);

    return 0;
}