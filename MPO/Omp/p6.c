/*Write a program to transpose a matrix in parallel using 
OpenMP. Use shared variables for the input and output 
matrices and private variables for loop indices.*/

#include <stdio.h>
#include <omp.h>

const int ROWS=3;
const int COLS =3;

void transpose_parallel(int input[ROWS][COLS], int output[COLS][ROWS]) {
    #pragma omp parallel for

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++){
            output[j][i] = input[i][j];
        }
    }
}

int main() { 
    
    int input_matrix[ROWS][COLS];
    int output_matrix[COLS][ROWS];

    printf("Matrix elements:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d ",&input_matrix[i][j]);
        }
    }
    
    transpose_parallel(input_matrix, output_matrix);
    
    printf("Original Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", input_matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            printf("%d ", output_matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
