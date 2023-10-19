#include <stdio.h>
int len(char *);

int main() {
    // declare variable
    int num[5] = {1,2,3,4,5};
    char words[] = "coding\0";

    // create integer  array with numbers
    int *q = num;
    printf("Result number: %d \n", num[0]); // result = 1 

    // create char array with word
    char *p = words;
    printf("Result words: %c \n", words[0]); // result = c

    // swap value of integer array between index 0 and 2 using pointer

    // using pointer method
    int temp = *q; // q refers to index = 0 of numbers
    *q = *(q+2); 
    *(q+2) = temp; 
    printf("Result swap: %d %d\n", num[0], num[2]); // result = 3 1

    // using array method
    // temp = q[0];
    // q[0] = q[2];
    // q[2] = temp; 
    // printf("Result swap: %d %d\n", num[0], num[2]); // result = 3 1


    // print memory address of array[3] using array method
    printf("numbers[3] = %p\n", &num[3]); // use array method
    printf("numbers[3] = %p\n", q+3); // use pointer method
    // result = 4

    // move integer pointer to the second data
    // q++; q++;
    q = &num[2]; 

    int lenght = len(words);
    printf("the lenght of the word: %d\n", lenght);

    return 0;
}

// create function to count total characters inside the strings

int len(char *string) {
    char *ptr = string;
    int count = 0;

    // \0 = end of the string
    while (*ptr != '\0') {
        ptr++;
        count++;
    }

    return count;
}