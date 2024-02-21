#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
#include <unistd.h>
void* f1(void *ptr);

pthread_t t1,t2,t3;
int main()
{
    pthread_attr_t a1;
    int pid, n;
    printf("Enter upper limit\n");
    scanf("%d",&n);
    printf("Main: My pid is %d\n\n", getpid());
    pthread_attr_init(&a1);
    pthread_create(&t1,&a1,f1,&n);
    pthread_create(&t2,&a1,f1,&n);
    pthread_create(&t3,&a1,f1,&n);
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    pthread_join(t3,NULL);
    return 0;
}
void* f1(void *ptr)
{
    char s[50];
    char ch;
    int i=0;
    fflush(stdin);
    printf("Enter a message\n");
    scanf("%s",s);
    for(int i=0;i< (*(int *)ptr);i++)
    {
        printf("%s\n",s);
    }
    pthread_exit(NULL);
    return NULL;
}