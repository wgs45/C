#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define LENGTH 3
#define WIDTH 3

int generateMaze(int mat[][LENGTH]);
int printMaze(int mat[][LENGTH]);
int rand_walk(int mat[][LENGTH], int x, int y, int steps);

int main() {
    int i, j, width, length;
    int steps = 0;
    int mat[WIDTH][LENGTH];
    generateMaze(mat);
    printMaze(mat);
    srand(time(NULL));
    rand_walk(mat, 0, 0, steps);
    return 0;
}

int generateMaze(int mat[][LENGTH]) {
    int i, j;
    for (i=0; i<WIDTH; i++) {
        for (j=0; j<LENGTH; j++) {
            mat[i][j] = 0;
        }
    }
    mat[0][0] = 1;
    mat[WIDTH-1][LENGTH-1] = 2;
    return 0;
}

int printMaze(int mat[][LENGTH]) {
    system("cls");
    int i, j;
    for (i=0; i<WIDTH; i++) {
        for (j=0; j<LENGTH; j++) {
            printf("%d", mat[i][j]);
            if (j < LENGTH-1) printf(" ");
            else printf("\n");
        }
    }
    Sleep(1000);
    return 0;
}

int rand_walk(int mat[][LENGTH], int x, int y, int steps) {
    steps++;
    int option;
    if (mat[x][y] == 2) {
        printMaze(mat);
        printf("\n=> %d steps\n", steps);
        return 0;
    } else {
        mat[x][y] = 1;
        printMaze(mat);
        option = rand()%4;
        mat[x][y] = 0;
        switch(option) {
            case 0: // go up
                if (x > 0) {
                    rand_walk(mat, x-1, y, steps);
                } else rand_walk(mat, x, y, steps);
                break;
            case 1: // go down
                if (x < WIDTH-1) {
                    rand_walk(mat, x+1, y, steps);
                } else rand_walk(mat, x, y, steps);
                break;
            case 2: // go left
                if (y > 0) {
                    rand_walk(mat, x, y-1, steps);
                } else rand_walk(mat, x, y, steps);
                break;
            case 3: // go right
                if (y < LENGTH-1) {
            rand_walk(mat, x, y+1, steps);
                } else rand_walk(mat, x, y, steps);
                break;
            default:
                rand_walk(mat, x, y, steps);
                break;
        }
    }
    return 0;
}

