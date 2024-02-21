#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
#include <unistd.h>
void* f1(void*);
pthread_t t1;
int main()
{
    pthread_attr_t a1;
    int pid, n;
    printf("Enter upper limit\n");
    scanf("%d",&n);
    printf("Main: My pid is %d\n\n", getpid());
    pthread_attr_init(&a1);
    pthread_create(&t1,&a1,f1,&n);
    pthread_join(t1,NULL);

    return 0;
}
void* f1(void *ptr)
{
    int sum = 0,i = 0;
    while(((sum + i) <= *((int *)ptr)) && (i<25))
    {
        sum +=i++;
    }
    printf("Thread id is: %ld\n",pthread_self());
    printf("Sum is: %d\n",sum);

    pthread_exit(NULL);
    return NULL;
}
