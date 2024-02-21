#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
#include <unistd.h>
void* f1(void *ptr);
void* f2(void *ptr);
pthread_t t1,t2,t3;
int main()
{
    pthread_attr_t a1;
    int n1,n2;
    printf("Hello I'm main thread\n");
    printf("Enter two numbers in between 1 to 9\n");
    scanf("%d %d",&n1,&n2);
    pthread_attr_init(&a1);
    
    pthread_create(&t1,&a1,f1,&n1);
    pthread_create(&t2,&a1,f2,&n2);

    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
  
    return 0;
}
void* f1(void *ptr)
{
    for(int i = 0;i < (*(int *)ptr);i++)
    {
        printf("Hello, thread1 here\n");
    }
    pthread_exit(NULL);
    return NULL;
}

void* f2(void *ptr)
{
    for(int i = 0;i < (*(int *)ptr);i++)
    {
        printf("Hello, thread2 here\n");
    }
    pthread_exit(NULL);
    return NULL;
}