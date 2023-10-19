#include <unistd.h>

// define an ft_strlen integer function
int ft_strlen(char *str) {
    int i = 0;
    while(str[i] != '\0') {
        i++;
    }

    return i;
}

int main(void) {
    int i = ft_strlen("Hello world...");

    return 0;
}