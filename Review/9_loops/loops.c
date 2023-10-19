#include <stdio.h>

// ? while
// ! calling do_thing 10 times
// int main() {
//     int value = 0;
//     int max = 10;
//     while (value <= max) {
//         do_thing();
//         value++;
//     }
// }

// ? for
// ! calling do_thing 10 times
// int main() {
//     int i;
//     int n = 10;
//     for(i = 0; i < n; i++) {
//         do_thing();
//     }
// }

// ? do_while
// ! calling do_thing once, even if n is 0
// int main() {
//     int n = 10;
//     do {
//         do_thing();
//     }
//     while(n);
// }

// ? break
// ! only calls do_thing once, and then exits loop
int main() {
    while (1) {
    do_thing();
    break;
    }
}

// ? continue
// ! only prints odd numbers
int main() {
    int i;
    int n = 10;
    for (i = 0; i < n; i++) {
    if ((i % 2) == 0)
        continue;

    printf("%d", i);
    }
}

// ? goto
// ! when we hit the first odd number
// ! jump to the label and handle the error
int main() {
    int i;
    int n = 10;
    for (i = 0; i < n; i++) {
    if ((i % 2) == 0)
        goto error;

    printf("%d", i);
    }

    error:
    printf("We encountered an odd number.");
}