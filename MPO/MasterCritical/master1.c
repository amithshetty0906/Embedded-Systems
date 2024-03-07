/*** Example: omp master directive ***/

#include <stdio.h>
#include <omp.h>

int main() {
    int num_threads;
    int thread_id;

    #pragma omp parallel private(thread_id) shared(num_threads)
    {
        #pragma omp master
        {
            num_threads = omp_get_num_threads();
            printf("Master thread (ID %d) is managing %d threads.\n", omp_get_thread_num(), num_threads);
        }

        // All threads execute the following code
        thread_id = omp_get_thread_num();
        printf("Thread %d is saying hello Embedded!\n", thread_id);
    }

    return 0;
}
