#include <stdio.h>
#include <stdlib.h>

void transpose(int x, int y, int **a, int **b);

int main() {
  int x = 3, y = 2, i = 0, j = 0;

  int **aa = (int **)malloc(y * sizeof(int *));
  for (i = 0; i < y; i++) {
    aa[i] = (int *)malloc(x * sizeof(int));
  }

  aa[0][0] = 1;
  aa[0][1] = 2;
  aa[0][2] = 3;
  aa[1][0] = 4;
  aa[1][1] = 5;
  aa[1][2] = 6;

  int **bb = (int **)malloc(x * sizeof(int *));
  for (i = 0; i < x; i++) {
    bb[i] = (int *)malloc(y * sizeof(int));
  }

  transpose(x, y, aa, bb);
  printf("\n");

  for (j = 0; j < x; j++) {
    for (i = 0; i < y; i++) {
      printf("%d ", bb[j][i]);
    }
    printf("\n");
  }

  // Free allocated memory
  for (i = 0; i < y; i++) {
    free(aa[i]);
  }
  free(aa);

  for (i = 0; i < x; i++) {
    free(bb[i]);
  }
  free(bb);

  return 0;
}

void transpose(int x, int y, int **a, int **b) {
  int i = 0, j = 0;

  for (i = 0; i < y; i++) {
    for (j = 0; j < x; j++) {
      b[j][i] = a[i][j];
      printf("%d ", b[j][i]);
    }
    printf("\n");
  }
}
