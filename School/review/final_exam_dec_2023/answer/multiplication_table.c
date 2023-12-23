#include <stdio.h>

// func prototype
void nine_times_nine(int row, int col);

int main() {

  // start with the first row and first column
  nine_times_nine(1, 1);

  return 0;
}

void nine_times_nine(int row, int col) {
  // if row is greater than 9, return the value
  if (row > 9) {
    return;
  }

  // print the value
  printf("%dx%d=%d\t", row, col, row * col);

  // move to the next column or start the new row
  if (col < 9) {
    nine_times_nine(row, col + 1);
  } else {
    // move to the next row and start from the first column
    printf("\n");
    nine_times_nine(row + 1, 1);
  }
  
}
