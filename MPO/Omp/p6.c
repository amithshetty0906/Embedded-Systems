/*Write a program to transpose a matrix in parallel using 
OpenMP. Use shared variables for the input and output 
matrices and private variables for loop indices.*/

#include<stdio.h>
#include<omp.h>

int main(){
    const int n=2;
    int A[n][n];
    int B[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            A[i][j]= i*n+j;
        }
    }

    #pragma omp parallel for shared(A,B)
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            B[i][j] = A[i][j];
        }
    }

    printf("\nInput Matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",A[i][j]);
        }
    }

    printf("\nTransposed Matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",B[i][j]);
        }
    }

    return 0;


}