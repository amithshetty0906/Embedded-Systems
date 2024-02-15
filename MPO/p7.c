#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 5
#define COLS 10

void populateMatrix(int matrix[ROWS][COLS]) {

    srand(time(NULL));

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            matrix[i][j] = rand() % 10 + 1;
        }
    }
}

void displayMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int matrix[ROWS][COLS];

    populateMatrix(matrix);

    printf("Matrix:\n");
    displayMatrix(matrix);

    return 0;
}
