/*8. Write a C program to populate a matrix of size 20*50 by 
generating random numbers in the range 101 to 201. Display 
the matrix to the screen. Also determine the smallest, 
largest, as well as the sum of all the elements of the 
matrix and display the results to the screen. Find the 
total time taken for the execution of your computations and
output the value.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>

#define ROWS 20
#define COLS 50

void populateMatrix(int matrix[ROWS][COLS]) {
    // Use current time as seed for random number generation
    srand(time(NULL));

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            // Generate a random number between 101 and 201
            matrix[i][j] = rand() % 101 + 101;
        }
    }
}

void displayMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            printf("%5d ", matrix[i][j]);  // Adjust the spacing for better formatting
        }
        printf("\n");
    }
}

int findSmallest(int matrix[ROWS][COLS]) {
    int smallest = matrix[0][0];

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (matrix[i][j] < smallest) {
                smallest = matrix[i][j];
            }
        }
    }

    return smallest;
}

int findLargest(int matrix[ROWS][COLS]) {
    int largest = matrix[0][0];

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (matrix[i][j] > largest) {
                largest = matrix[i][j];
            }
        }
    }

    return largest;
}

int findSum(int matrix[ROWS][COLS]) {
    int sum = 0;

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            sum += matrix[i][j];
        }
    }

    return sum;
}

int main() {
    int matrix[ROWS][COLS];
    struct timeval start, end;
    gettimeofday(&start, NULL);
    populateMatrix(matrix);

    printf("Matrix:\n");
    displayMatrix(matrix);

    int smallest = findSmallest(matrix);
    int largest = findLargest(matrix);
    int sum = findSum(matrix);

    printf("\nSmallest Element: %d\n", smallest);
    printf("Largest Element: %d\n", largest);
    printf("Sum of All Elements: %d\n", sum);

    gettimeofday(&end, NULL);

    long seconds = end.tv_sec - start.tv_sec;
    long microseconds = end.tv_usec - start.tv_usec;
    double total_time = seconds + microseconds / 1e6;
    printf("\nTotal Execution Time: %.6f seconds\n", total_time);

    return 0;
}
