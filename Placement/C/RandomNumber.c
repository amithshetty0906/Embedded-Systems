#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Get the current time as the seed
    time_t t;
    srand((unsigned)time(&t));

    // Generate and print a random number
    int randomNum = rand();
    printf("Random Number: %d\n", randomNum);

    return 0;
}

