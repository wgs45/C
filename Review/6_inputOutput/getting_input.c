#include <stdio.h>

// getchar() and putchar() getchar() reads the next 
// character from the text stream, which in our examples 
// is the keyboard input. putchar(c) will print out the 
// character c.

// ? Program to find first character

// int main() {
//     char c;
//     printf("Enter a word: ");
//     c = getchar();
//     puts("The first character was: ");
//     putchar(c);

//     return 0;
// }

// ? This can be used for looping 
// ? through command line input one character at a time

// When running the above type of example, 
// remember that you can trigger an 'EOF' 
// (End Of File symbol) by entering Ctrl-D on a line by 
// itself. On Windows enter Ctrl-Z.

// int main() {
//     int c;
//     printf("Enter a word: ");
//     c = getchar();
//     while (c != EOF) {
//         putchar(c);
//         c = getchar();
//     }

//     return 0;
// }

// ? scanf program
// TODO: above...
// ! Always specify the string length when using scanf().

// int main() {
//     char name[11];  // We want to store 10 characters, plus the string terminator
//     puts("Enter your name: ");
//     // scanf will save the first 10 characters of input entered into 'name'
//     scanf("%10s", name);
//     printf("Hello, %s!\n", name);

//     return 0;
// }

// ? Alternative of scanf program
// ? Using fgets()

// How to break it Try using scanf without a character limit, and giving it more characters than the variable can hold.

// It will cause the program to write more data into the character array than it can hold, and this leads to a crash.

// fgets() With fgets(), you must always pass the length of your buffer:

int main() {
    char name[11];

    puts("Enter your name: ");
    // fgets will save the first 10 characters of input entered into 'name'
    // params: pointer to a buffer, max size, and the source of the data
    fgets(name, sizeof(name), stdin);
    // "stdin" just means the data will come from the keyboard
    printf("Hello, %s!\n", name);

    return 0;
}
