/*Write a simple C program to generate a random number 
without initializing the seed for the random number 
generator {Within a span of "one second", if you keep 
running the program multiple times, you should see the same
random number output}*/

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
