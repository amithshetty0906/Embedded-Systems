#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int random_number = rand() % 10;  //random number in the range [0, 9]
    printf("Random Number between 0 and 9: %d\n", random_number);

    return 0;
}
