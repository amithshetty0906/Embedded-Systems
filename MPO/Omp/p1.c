/*Illustrate loop parallelism with the for loop by writing a 
program to calculate the sum of an array in parallel using 
OpenMP. (Use a shared variable for the result and private 
variables for loop indices).*/

#include<stdio.h>
#include<omp.h>
#include<stdlib.h>

int main(){
    const int size =100;
    const int t_num=4;

    int array[size];
    int sum=0;

    srand(123);
    for(int i=0;i<size;i++){
        array[i]=rand()%100;
    }
    
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }

    #pragma omp parallel num_threads(t_num)shared (sum)
    {
        int t_sum=0;

        #pragma omp for
        for(int i=0;i<size;i++){
            t_sum +=array[i];
        }

        #pragma omp critical
        {
            sum += t_sum;
        }
    }

    printf("\nSum of array elements is %d\n",sum);

    return 0;
}