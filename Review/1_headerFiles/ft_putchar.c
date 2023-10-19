#include <unistd.h>

// void function does not return any value, it writes directly
// char is an parameter inside the void function
void ft_putchar(char c) {
    write(1, &c, 1);
}

int main(void) {
    ft_putchar(42); // print a star
    // ft_putchar(42 + '0'); // will only print 4

    // will not work because you are using ('') instead of (""),
    // so the C language will think it is a char array
    // ft_putchar('4');

    return 0;
}