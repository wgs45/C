#include <stdio.h>
#include <stdlib.h>

int main() {
  size_t size = 0, batch_size = 100;
  int start, end, i;
  char str;

  char *dna = (char*)malloc(sizeof(char)*batch_size);

  while((str = getchar()) != EOF) {
    if (str != '\n') {
      dna[size++] = str;
    } else if (size % batch_size == batch_size - 1) {
      printf("Reallocated again (%ld) \n", size + 1);
      dna = (char*)realloc(dna, size + batch_size);
    }
  }

  dna[size] = '\0';

  printf("Size: %ld\n", size);

  free(dna);

  return 0;
}


