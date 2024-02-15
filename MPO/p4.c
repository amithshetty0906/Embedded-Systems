#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int random_number = rand() % 100 + 1;  //random number in the range [1, 100]
    printf("Random Number between 1 and 100: %d\n", random_number);

    return 0;
}
