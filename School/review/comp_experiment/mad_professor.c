#include<stdio.h>
#include<string.h>

// c program to predict what the mad professor is saying
// source: uva10222

int main(){
    // Initialize an array of characters with size 999 and set all elements to 0
    char str[999] = {0};

    // Define two arrays of characters
    // ct array represents the characters to be replaced
    char ct[ ] = " 234567890-=ertyuiop[]\\dfghjkl;'cvbnm,./";
    // pt array represents the characters to replace with
    char pt[ ] = " `1234567890qwertyuiop[asdfghjklzxcvbnm,";

    int i, j;

    // Get input from the user and store it in the str array
    gets(str);

    // Iterate through each character in the str array
    for(i = 0; i < strlen(str); i++) {
        // Iterate through each character in the ct array
        for(j = 0; j < strlen(ct); j++) {
            // If the current character in the str array matches the current character in the ct array
            if(str[i] == ct[j]) {
                // Print the corresponding character from the pt array
                printf("%c", pt[j]);
            }
        }
    }
    // Print a new line character
    printf("\n");

    return 0;
}