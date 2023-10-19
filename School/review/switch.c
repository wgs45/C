#include <stdio.h>

int main() {
    char ch;

    while (ch = getchar()) {
        switch (ch) {
            case 'u':
                printf("up->");
                break;
            case 'd':
                printf("down->");
                break;
            case 'l':
                printf("left->");
                break;
            case 'r':
                printf("right->");
                break;
            case 'p':
                printf("???->");
                break;
             case 'q':
                printf("???->");
                break;
            case 'x':
                printf("END");
                break;
        }
    } 

    return 0;
}
