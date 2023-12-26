#include <stdio.h>
#include <math.h>

void vector_norm(float *vector, int size);

int main() {
  int i, size = 2;

  float vector[size];

  for (i = 0; i < size; i++) {
    scanf("%f", &vector[i]);
  }

  vector_norm(vector, size);

  for(i = 0; i < size; i++) {
    printf("%.4f\n", vector[i]);
  }

  return 0;
}

void vector_norm(float *vector, int size) {
  int i;
  float magnitude = 0.0;

  for (i = 0; i < size; i++) {
    magnitude += vector[i] * vector[i];
  }

  magnitude = sqrt(magnitude);

  for (i = 0; i < size; i++) {
    vector[i] /= magnitude;
  }
}
