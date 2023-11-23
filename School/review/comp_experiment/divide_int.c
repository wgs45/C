#include <stdio.h>

// c program to divide a certain integer
// source: uva10190

// sample input:
// 125 5
// 30 3
// 80 2
// 81 3

// sample output:
// 125 25 5 1
// Boring!
// Boring!
// 81 27 9 3 1

int main() {
    int m, n, i;
    while (scanf("%d %d", &m, &n) == 2) // read two integers from input until end of file is reached
    {
        if (n < 2 || m == 0 || m < n) // check if the given conditions are met
        {
            puts("Boring!"); // print "Boring!"
            continue; // continue to the next iteration of the loop
        }
        int ans[100] = {m}; // create an array to store the answer, initialize the first element with m
        for (i = 1;; i++) // start a loop without a condition
        {
            if (ans[i - 1] == 1) // check if the previous element is 1
                break; // exit the loop
            if (ans[i - 1] % n) // check if the previous element is not divisible by n
            {
                i = -1; // set i to -1
                break; // exit the loop
            }
            ans[i] = ans[i - 1] / n; // calculate the next element by dividing the previous element by n
        }
        if (i < 0) // check if i is less than 0
            puts("Boring!"); // print "Boring!"
        else
        {
            printf("%d", ans[0]); // print the first element
            for (m = 1; m < i; m++) // start a loop from 1 to i-1
                printf(" %d", ans[m]); // print each element separated by a space
            puts(""); // print a new line
        }
    }
    return 0;
}