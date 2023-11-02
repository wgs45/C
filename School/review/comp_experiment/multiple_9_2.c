#include <stdio.h>
#include <string.h>

// C program to find multiple 9 and its degree
// source: uva10922

// sample output:
// 999999999999999999999999999

// sample output:
// 999999999999999999999999999 is a multiplier of 9 and has 9 degree: 2

int main() {

// ? '\0' is a null value initializer
char a[10000]={'\0'};

    while(fgets(a, sizeof(a), stdin)) {
        int x = 0;

        if(a[0] == '0') return 0;
        while(a[x] != '\n') {
            printf("%c", a[x]);
            x++;
        }

        int degree = 0, sum = 0, flag = 0;
        while(sum != 9) {
            sum = 0;
            int index = 0;
            while(a[index] != '\n' && a[index] != '\0'){
                sum = sum + a[index] - '0';
                //printf("%d\n",sum);
                index++;
            }

            if(sum % 9 == 0) {
                sprintf(a,"%d",sum); //example: sum=123 a[0]=1 a[2]=2 a[3]=3
            } else {
                flag = 1;
                break;
            }
            degree++;
        }

        if(flag == 1) {
            printf(" is not a multiple of 9.\n");
        } else {
            printf(" is a multiple of 9 and has a 9-degree of %d\n",degree);
        }
    }

    return 0;
}