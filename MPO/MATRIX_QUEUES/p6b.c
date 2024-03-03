/*How much time does your computation take? 
Convert the code to a function and determine how much time 
the code takes when your function is invoked by your main.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandom(int min, int max) {
    return rand() % (max - min + 1) + min;
}


void subtractMatrices(int **matrix1, int **matrix2, int **result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void displayMatrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void subtractAndMeasureTime(int rows, int cols) {
    // Allocate memory for matrices
    int **matrix1 = (int **)malloc(rows * sizeof(int *));
    int **matrix2 = (int **)malloc(rows * sizeof(int *));
    int **result = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix1[i] = (int *)malloc(cols * sizeof(int));
        matrix2[i] = (int *)malloc(cols * sizeof(int));
        result[i] = (int *)malloc(cols * sizeof(int));
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix1[i][j] = generateRandom(20, 50);
            matrix2[i][j] = generateRandom(20, 50);
        }
    }

    subtractMatrices(matrix1, matrix2, result, rows, cols);

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(matrix1[i]);
        free(matrix2[i]);
        free(result[i]);
    }
    free(matrix1);
    free(matrix2);
    free(result);
}

int main() {
    srand(time(NULL));

    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Measure execution time
    clock_t start_time = clock();
    subtractAndMeasureTime(rows, cols);
    clock_t end_time = clock();
    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", time_taken);

    return 0;
}
