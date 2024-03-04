// determine the total threads in the parallel region 

#include<stdio.h>
#include<omp.h>

int main(){
    #pragma omp parallel
    {
        printf("Total threads executing the parallel region = %d\n",omp_get_num_threads());
    }
    //parallel region ends here

    printf("\nI am the master thread!\n");
    return 0;
}