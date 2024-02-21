#include <stdio.h>
#include <pthread.h>
void* f1(void*);
void* f2(void*);
pthread_t t1, t2;
int main()
{
    pthread_attr_t a1;
    int pid, n;
   
    pthread_attr_init(&a1); /* initialise the attribute with default
    values */
    printf("Hello user, pls give a value for n:\t");
    scanf("%d",&n);
    printf("\n");
    pthread_create(&t1,&a1,f2,&n);
    pthread_create(&t2,&a1,f2,&n);
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    printf("\nMain: The two threads have finished executing...\n\n");
    return 0;
}
void* f1(void* p1)
{
    int i, arg;
    arg = *(int *)p1; // collect the value of the argument from *p
    printf("\n");
    for(i=1; i<=arg; i++)
    printf("Hello MSIS Embedded 2023.\n");
    pthread_exit(0);
}
void* f2(void* p1)
{
    int i,arg;
    int sum =0;
    arg = *(int *)p1;
    for(i=1; i <= arg; i++)
    sum=sum+i;
    printf("\nTHE SUM IS %d\n",sum);
    pthread_exit(0);
}
