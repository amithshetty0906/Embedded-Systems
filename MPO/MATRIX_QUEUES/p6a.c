/*Develop a C program to subtract one matrix from another.
Make sure they are compatible by comparing their rows and 
columns; give an error message otherwise. The program 
should populate both the matrices with random numbers 
between 20 and 50, display the matrices first and later 
display the result matrix. */

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

int main() {
    srand(time(NULL));

    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    //Allocate memory for matrices
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

    printf("Matrix 1:\n");
    displayMatrix(matrix1, rows, cols);
    printf("Matrix 2:\n");
    displayMatrix(matrix2, rows, cols);

    
    if (rows != cols) {
        printf("Error: Matrices are not compatible for subtraction.\n");
        return 1;
    }

    subtractMatrices(matrix1, matrix2, result, rows, cols);
    printf("Result Matrix:\n");
    displayMatrix(result, rows, cols);

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(matrix1[i]);
        free(matrix2[i]);
        free(result[i]);
    }
    free(matrix1);
    free(matrix2);
    free(result);

    return 0;
}
