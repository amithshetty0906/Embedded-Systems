#include <omp.h>
#include <stdio.h>

#define ARR_LEN 100

int main() {
    int arr[ARR_LEN];
    int sum = 0;

    // Initialize array
    for (int i = 0; i < ARR_LEN; ++i) {
        arr[i] = i + 1;
    }

    #pragma omp parallel for shared(sum)
    for (int i = 0; i < ARR_LEN; ++i) 
    {
        #pragma omp critical
        sum += arr[i];
    }

    printf("Sum: %d\n", sum);

    return 0;
}