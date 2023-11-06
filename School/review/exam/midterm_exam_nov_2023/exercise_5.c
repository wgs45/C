#include <stdio.h>

int main() {
    // Create an array to store the count of each letter from 'a' to 'z'
    int alphabetCount[26] = {0};
    char ch, i;
    int distinctLetter = 0;

    // Read characters from the user until a newline character is encountered
    while((ch = getchar()) != '\n') {
        // Use a switch statement to increment the count for the corresponding letter
        switch(ch) {
            case 'a' : case 'A' : alphabetCount[0]++; break;
            case 'b' : case 'B' : alphabetCount[1]++; break;
            case 'c' : case 'C' : alphabetCount[2]++; break;
            case 'd' : case 'D' : alphabetCount[3]++; break;
            case 'e' : case 'E' : alphabetCount[4]++; break;
            case 'f' : case 'F' : alphabetCount[5]++; break;
            case 'g' : case 'G' : alphabetCount[6]++; break;
            case 'h' : case 'H' : alphabetCount[7]++; break;
            case 'i' : case 'I' : alphabetCount[8]++; break;
            case 'j' : case 'J' : alphabetCount[9]++; break;
            case 'k' : case 'K' : alphabetCount[10]++; break;
            case 'l' : case 'L' : alphabetCount[11]++; break;
            case 'm' : case 'M' : alphabetCount[12]++; break;
            case 'n' : case 'N' : alphabetCount[13]++; break;
            case 'o' : case 'O' : alphabetCount[14]++; break;
            case 'p' : case 'P' : alphabetCount[15]++; break;
            case 'q' : case 'Q' : alphabetCount[16]++; break;
            case 'r' : case 'R' : alphabetCount[17]++; break;
            case 's' : case 'S' : alphabetCount[18]++; break;
            case 't' : case 'T' : alphabetCount[19]++; break;
            case 'u' : case 'U' : alphabetCount[20]++; break;
            case 'v' : case 'V' : alphabetCount[21]++; break;
            case 'w' : case 'W' : alphabetCount[22]++; break;
            case 'x' : case 'X' : alphabetCount[23]++; break;
            case 'y' : case 'Y' : alphabetCount[24]++; break;
            case 'z' : case 'Z' : alphabetCount[25]++; break;
            default : break;
        }
    }

    // Count the number of distinct letters
    for (i = 0; i < 26; i++) {
        if (alphabetCount[i] > 0) {
            distinctLetter++;
        }
    }

    // Print the count of distinct letters
    printf("%d", distinctLetter);

    return 0;
}
