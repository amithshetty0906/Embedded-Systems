#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int main() {

    time_t t;
    time(&t);
    srand((unsigned int)t);
    int random_number = rand();
    printf("Random Number: %d\n", random_number);

    return 0;

}
