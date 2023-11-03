#include <stdio.h>

// This program converts numbers to Bangla language strings
// source: uva10101

// sample input:
// 23764

// sample output:
// 23 hajar 7 shata 64

// ! Function prototypes
void bangla(long long int);

int main() {
    long long int input; // Variable to store the input number
    int count = 1; // Variable to keep track of the count

    // Loop until end of file (EOF) is reached
    while(scanf("%lld", &input) != EOF) {
        // Call the bangla function to convert the input number to Bangla language
        bangla(input);
        printf("\n"); // Print a new line
    }

    return 0; // Return 0 to indicate successful execution
}

// Function to convert a number to Bangla language
void bangla(long long int input) {
    // Check if the input number is greater than or equal to 10 million
    if (input >= 10000000) {
        // Recursively call the bangla function to convert the input number in millions
        bangla(input / 10000000);
        printf(" Kuti"); // Print "Kuti"
        input = input % 10000000; // Update the input number to the remaining part
    }

    // Check if the input number is greater than or equal to 10 thousand
    if (input >= 100000) {
        // Recursively call the bangla function to convert the input number in lakhs
        bangla(input / 100000);
        printf(" lakh"); // Print "lakh"
        input = input % 100000; // Update the input number to the remaining part
    }

    // Check if the input number is greater than or equal to 10 hundred
    if (input >= 1000) {
        // Recursively call the bangla function to convert the input number in hundreds
        bangla(input / 1000);
        printf(" hajar"); // Print "hajar"
        input = input % 1000; // Update the input number to the remaining part
    }

    // Check if the input number is greater than or equal to 100
    if (input >= 100) {
        // Recursively call the bangla function to convert the input number in tens
        bangla(input / 100);
        printf(" shata"); // Print "shata"
        input = input % 100; // Update the input number to the remaining part
    }

    // Check if the input number is less than 100
    if (input < 100) {
        printf(" %d", input); // Print the input number
    }
}