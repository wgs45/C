#include <stdio.h>
#include <stdlib.h>

// c program to convert number to text

// func prototype
void bangla(long long int input);

int main() {
  long long int input;
  int count = 1;

  while(scanf("%lld", &input) != EOF) {
    bangla(input);
    printf("\n");
  }

  return 0;
}

void bangla(long long int input) {
  if (input >= 10000000) {
    bangla(input / 10000000);
      printf(" kuti ");
    input = input % 10000000;
  } 

  if (input >= 100000) {
    bangla(input / 100000);
    printf(" lakh ");
    input = input % 100000;
  }

  if (input >= 1000) {
    bangla(input / 1000);
    printf(" hajar ");
    input = input % 1000;
  }

  if (input >= 100) {
    bangla(input / 100);
    printf(" shata ");
    input = input % 100;
  }

  if (input < 100) {
    printf("%lld", input);
  }
}
