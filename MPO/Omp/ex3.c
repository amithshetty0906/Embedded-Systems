//thread_id of each thread

#include<stdio.h>
#include<omp.h>

int main(){
    #pragma omp parallel
    {
        printf("My thread id is %d\n",omp_get_thread_num());
    }
    //parallel region ends here

    printf("\nI am the main thread!");
    return 0;
}