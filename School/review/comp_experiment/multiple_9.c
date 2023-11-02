#include <stdio.h>
#include <string.h>

int main() {
    char string[1001];

            while(scanf("%s", string) == 1) {
                if (strcmp(string, "0") == 0) {
                    break;

                int x, sum = 0;
                for (x = 0; string[x]; x++)
                    sum += string[x] - '0';
                printf("%s is ", string);
                if (sum % 9 != 0) {
                    puts("not a multiple of 9.");
                } else {
                    int degree = 1;

                while(sum >= 10) {
                    sprintf(string, "%d", sum);

                    sum = 0;
                    for (x = 0; string[x]; x++) {
                        sum += string[x] - '0';
                        degree++;
                    }
                }
                printf("a multiple of 9 and has 9-degree: %d\n", degree);
            }
        }
    }
    return 0;
}