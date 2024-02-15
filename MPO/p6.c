#include <stdio.h>
#include <time.h>

void printHelloWorld(int times) {

    for (int i = 0; i < times; ++i) {

        printf("Hello, world!\n");

    }

}

int main() {

    clock_t start_time_10 = clock();
    printHelloWorld(10);
    clock_t end_time_10 = clock();

    double execution_time_10 = ((double)(end_time_10 - start_time_10)) / CLOCKS_PER_SEC;

    printf("Execution time for printing 10 times: %.6f seconds\n", execution_time_10);

    clock_t start_time_10000 = clock();
    printHelloWorld(10000);
    clock_t end_time_10000 = clock();

    double execution_time_10000 = ((double)(end_time_10000 - start_time_10000)) / CLOCKS_PER_SEC;

    printf("Execution time for printing 10,000 times: %.6f seconds\n", execution_time_10000);

    return 0;

}
