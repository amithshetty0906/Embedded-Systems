/*1. 
Write a program which creates a thread. The main thread should 
publish its pid. Let the thread publish its thread id. Next the 
thread computes the sum of first twenty five numbers and outputs the 
result to the screen. {Use pthread_join() in the main, so that it 
waits for the thread to finish its execution.} 
Modify the above code such that the upper limit of the summation is 
read from the user and is passed as a parameter to the thread.*/

#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
#include<sys/types.h>

void *f1(void *);

pthread_t t1;

int main(){
    pthread_attr_t a1;
    int pid, n;

    printf("Enter upper limit: ");
    scanf("%d", &n);

    printf("Main: My pid is %d\n", getpid());
    pthread_attr_init(&a1);
    pthread_create(&t1, &a1, f1, &n);
    pthread_join(t1, NULL);

    return 0;
}

void *f1(void *ptr){
    int sum = 0, i = 0;
    int limit = *((int *)ptr);  // Dereference ptr to get the limit

    while (i < 25 && (sum + i) <= limit) {
        sum += i;
        i++;
    }

    printf("Thread id is %ld\n", pthread_self());
    printf("SUM is %d\n", sum);

    pthread_exit(NULL);
    return NULL;
}

