/*Write a program to find the minimum element in an array in 
parallel using OpenMP. Use shared variables for the array 
and the minimum value, and private variables for loop 
indices.*/

#include<stdio.h>
#include<omp.h>
#include<stdlib.h>

int main(){
    const int size=100;
    const int t_num=4;

    int array[size];
    int min_ele=0;

    srand(123);
    for(int i=0;i<size;i++){
        array[i]=rand()%100;
    }

    printf("original array is\n");
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }

    #pragma omp num_threads(t_num) shared(array,min_ele) shared(array,min_ele)
    {
        int t_min_ele = array[0];

        #pragma omp for
        for(int i=0;i<size;i++){
            if(array[i]<t_min_ele){
                t_min_ele = array[i];
            }
        }

        #pragma omp critical
        {
            if(t_min_ele < min_ele){
                min_ele = t_min_ele;
            }
        }
    }

    printf("\n\nminimum value in the array is %d\n",min_ele);
    return 0;

}