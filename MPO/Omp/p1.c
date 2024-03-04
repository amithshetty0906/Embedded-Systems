/*1. Display a welcome message in a parallel bock and observe
how many times it gets displayed.
2. Modify the above to print the thread id of the executing
thread, with each disply message.
3. Further modify the above to print the total number of 
executing threads.
4. Create a parallel block. Compute the sum of numbers from
zero to thread_id, and output the sum to the screen. Run 
your code and observe the result.*/

#include <omp.h>
#include <stdio.h>

int main() {
    printf("question 1\n");
    // 1. Display a welcome message in a parallel block and observe how many times it gets displayed.
    #pragma omp parallel
    {
        printf("Welcome message\n");
    }

    printf("\nquestion2\n");

    // 2. Modify the above to print the thread id of the executing thread, with each display message.
    #pragma omp parallel
    {
        int t_id = omp_get_thread_num();
        printf("Welcome message from thread %d\n", t_id);
    }

    printf("\nquestion3\n");

    // 3. Further modify the above to print the total number of executing threads.
    #pragma omp parallel
    {
        int t_id = omp_get_thread_num();
        int t_num = omp_get_num_threads();
        printf("Welcome message from thread %d (Total threads: %d)\n", t_id, t_num);
    }

    printf("\nquestion4\n");

    // 4. Create a parallel block. Compute the sum of numbers from zero to thread_id, and output the sum to the screen.
    #pragma omp parallel
    {
        int t_id = omp_get_thread_num();
        int sum = 0;
        for (int i = 0; i <= t_id; ++i) {
            sum += i;
        }
        printf("Thread %d: Sum from 0 to %d is %d\n", t_id, t_id, sum);
    }

    return 0;
}

