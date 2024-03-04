/*Implement a program to calculate the square of each element
in an array in parallel using OpenMP. Use shared variables 
for the input array and private variables for the parallel 
for loop indices.
*/

#include<stdio.h>
#include<omp.h>
#include<stdlib.h>

int main(){
    const int size=100;
    const int t_num =4;

    int array[size];

    for(int i=0;i<size;i++){
        array[i]=i+1;
    }

    printf("original array is\n");
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);   
    }

    #pragma omp num_threads(t_num)shared(array)
    {
        #pragma omp for
        for(int i=0;i<size;i++){
            array[i] *= array[i];
        }
    }

    printf("\n\nArray after squaring\n");
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    return 0;
}
