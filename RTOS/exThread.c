/*Create 3 threads. 
 1st thread displays 'Hello World' 
 2nd thread displays 'Hello India'
 3rd thread "Hello MCIS Manipal" */

 #include<stdio.h>
 #include<stdlib.h>
 #include<sys/types.h>
 #include<unistd.h>
 #include<pthread.h>

 void *f1(void*);
 void *f2(void*);
 void *f3(void*);

 pthread_t t1,t2,t3;

 int main(){
    pthread_attr_t a;

    printf("Main: My pid is %d\n",getpid());
    pthread_attr_init(&a);

    printf("\n");

    pthread_create(&t1,&a,f1,NULL);
    pthread_create(&t2,&a,f2,NULL);
    pthread_create(&t3,&a,f3,NULL);

    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    pthread_join(t3,NULL);

    printf("Main: All threads have finished executing\n");

    return 0;
 }

 void *f1(void* p1){
    sleep(2);
    printf("Thread 1: hello world!\n");
    printf("Thread 1: My id is %lu\n",pthread_self());

    pthread_exit(0);
 }

 void *f2(void *p1){
    printf("Thread 2: Hello India\n");
    printf("Thread 2: My id is %lu\n",pthread_self());

    pthread_exit(0);
 }

 void *f3(void *p1){
    printf("Thread 3: Hello MSIS,Manipal\n");
    printf("Thread 3: My id is %lu\n",pthread_self());

    pthread_exit(0);
 }

/*gcc -o exThread exThread.c -pthread*/