//Print hello world from each threads

#include<stdio.h>
#include<omp.h>

int main(){
    #pragma omp parallel
    {
        printf("hello from thread %d\n",omp_get_thread_num());
    }
    //omp parallel region ends here

    printf("\nI am the master thread!\n");
    return 0;
}