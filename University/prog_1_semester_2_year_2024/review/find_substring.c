#include <stdio.h>

int main() {
    char str[100], sub[100];

    printf("Enter the first string then the second string(Seperated with space): ");
    scanf("%s %s", str, sub);

    int i, j, pos = -1;
    for (i = 0; str[i]; i++) {
        j = 0;
        while (sub[j] && str[i + j] == sub[j]) {
            j++;
        }
        if (!sub[j]) {
            pos = i;
            break;
        }
    }

    if (pos != -1) {
        printf("Substring found at position: %d\n", pos);
    } else {
        printf("Substring not found.\n");
    }
   return 0;
}
