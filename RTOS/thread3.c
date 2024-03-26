/*3. Write a program which creates two threads. Let the main thread 
display a message, "Hello, main thread here!". Also the main thread 
reads 2 integers n1 and n2 (which can range between 1 to 9) from the 
user. Main should pass n1 to thread1, and n2 to thread2. Thread1 then
displays "Hello, thread1 here!" n1 times. Thread2 displays 
"Hello,thread2 here!" n2 times.*/

#include<stdio.h>
#include<pthread.h>
#include<sys/types.h>
#include<unistd.h>

void *f1(void *ptr);
void *f2(void *ptr);

pthread_t t1,t2,t3;

int main(){
    pthread_attr_t a1;
    int n1,n2;
    printf("hello i am main thread\n");
    printf("enter  two number between 1 to 9\n");
    scanf("%d %d",&n1,&n2);
    pthread_attr_init(&a1);

    printf("thread one\n");
    pthread_create(&t1,&a1,f1,&n1);
    sleep(5);
    printf("thread two\n");
    pthread_create(&t2,&a1,f2,&n2);

    pthread_join(t1,NULL);
    pthread_join(t2,NULL);

    return 0;
}

void* f1(void *ptr){
    for(int i = 0;i < (*(int *)ptr);i++){
        printf("Hello, thread1 here\n");
    }
    pthread_exit(NULL);
    return NULL;
}

void* f2(void *ptr){
    for(int i = 0;i < (*(int *)ptr);i++){
        printf("Hello, thread2 here\n");
    }
    pthread_exit(NULL);
    return NULL;
}

