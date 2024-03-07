/*Implement a program to generate the Fibonacci series in 
parallel using OpenMP. Use shared variables for the result 
array and private variables for each thread's local 
variables.*/

#include <stdio.h>
#include <omp.h>

void fibonacci_parallel(int size, int *result) {
    #pragma omp parallel
    {
        int i, a = 0, b = 1;
        #pragma omp single
        {
            result[0] = a;
            result[1] = b;
        }
        #pragma omp for
        for (i = 2; i < size; i++) {
            int temp = b;
            b = a + b;
            a = temp;
            result[i] = b;
        }
    }
}

int main() {
    const int size = 20; // Number of terms in the Fibonacci series
    int result[size];
    
    fibonacci_parallel(size, result);
    
    printf("Fibonacci Series up to %d terms:\n", size);
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    
    return 0;
}

