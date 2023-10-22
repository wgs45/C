#include <stdio.h>

// program to check if an input number is the multiple of 11

int main() {

    while(1) {
        char a[1000] = {'\0'}; // \0 is a null character
        int i = 0;
        int x = 0;
        int regex = 0;

        while(scanf("%c", &a[i]) == 1 && a[i] != '\n') {
            if (a[i] != ' ') {
                i++;
            }
        }

        if (a[0] == '0' && a[1] == '\n') {
            return 0;
        }

        i = 0;
        while (a[i] != '\n') {
            printf("%c", a[i]);
            i++;
        }

        regex = a[0] - '0';
        while(1) {
            if (a[x + 1] == '\n' || x + 1 >= 1000) {
                break;
            }
            regex = ((regex * 10 + (a[x + 1] - '0')) % 11);
            x++;
            if (a[x + 1] == '\n' || x + 1 >= 1000) {
                break;
            }
        }

        x = 0;
        if (regex == 0) {
            printf(" is a multiple of 11.\n");
        } else {
            printf(" is not a multiple of 11.\n");
        }
    }
}