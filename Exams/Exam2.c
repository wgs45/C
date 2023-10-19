#include <stdio.h>

int main() {
    char str[100];
    int x, vowels = 0, consonants = 0;
    int i; // variable for Ascii

    // input
    printf("Enter a character: ");
    scanf("%s", str);
    printf("Character entered: %s\n", str);
    
    // looping for finding vowels and consonants
    for(x = 0; str[x]; x++) {
        if(str[x]=='a'|| str[x]=='e'||str[x]=='i'||str[x]=='o'||str[x]=='u'||str[x]=='A'||str[x]=='E'||str[x]=='I'||str[x]=='O' ||str[x]=='U')
		    vowels++;
        else
            consonants++;
            printf("vowels count: %d\n", vowels);
            printf("consonants count: %d\n", consonants);
    }

    // results
    printf("Result Vowels: %d\n", vowels);
    printf("Result Consonants: %d\n", consonants);
    
}