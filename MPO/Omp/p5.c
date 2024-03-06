/*Implement a program to generate the Fibonacci series in 
parallel using OpenMP. Use shared variables for the result 
array and private variables for each thread's local 
variables.*/

#include<stdio.h>
#include<omp.h>
#include<stdlib.h>

int main(){
    const int size = 10;
    const int t_num = 4; 

    int fibonacci[size];
    fibonacci[0]=0;
    fibonacci[1]=1;

    /*#pragma omp parallel num_threads(t_num) shared(fibonacci)
    {
        int t_id = omp_get_thread_num();
        int start_index = 2*t_id +2;
        int end_index = start_index + size/t_num;
        

        for(int i= start_index;i<end_index;i++){
            fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        }
    }*/

    #pragma omp parallel num_threads(t_num) shared(fibonacci)
    {
        int t_id = omp_get_thread_num();
        int fib[size];
        

        for(int i= 2+t_id;i<size;i += t_num){
            fib[i] = fibonacci[i-1] + fibonacci[i-2];
        }

        #pragma omp critical
        {
            for (int i = 2 + t_id; i < size; i += t_num){
                fibonacci[i] = fib[i];
            }
        }
    }

    printf("Fibonacci series is \n");
    for(int i=2;i<size;i++){
        printf("%d ",fibonacci[i]);
    }
    return 0;
}

