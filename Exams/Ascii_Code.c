#include <stdio.h>

int main() {    
    char str[] = "Hello";
    int i;

    for( i=65 ; i<=122 ; i++ ) 
    {  
        printf("ASCII value of character %c = %d\n", i, i);  
    }  

    return 0;
}