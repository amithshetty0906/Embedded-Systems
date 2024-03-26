/*2. Write a program which creates 3 threads. 
case (i) Let the main thread input the value of n from the user. 
{Hint:- You can store n in a global variable so that it is available 
to all threads of the process} Each thread reads a message from the 
user and displays the message n times. 
case (ii) Modify your program such that the value of n is given by 
the user and is passed as a parameter to the threads. */


#include<stdio.h>
#include<pthread.h>
#include<sys/types.h>
#include<unistd.h>

char s[50];
void *f1(void *ptr);
pthread_t t1,t2,t3;

int main(){
    pthread_attr_t a1;
    int pid,n;
    printf("Enter upper limit: ");
    scanf("%d",&n);

    printf("Main: My pid is %d\n", getpid());
    pthread_attr_init(&a1);

    printf("Enter message:\n");
    scanf("%s", s);

    printf("first thread\n");
    pthread_create(&t1, &a1, f1, &n);
    sleep(5);
    printf("second thread thread\n");
    pthread_create(&t2, &a1, f1, &n);
    sleep(5);
    printf("third thread\n");
    pthread_create(&t3, &a1, f1, &n);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_join(t3, NULL);

    return 0;
}

void *f1(void *ptr){
    for(int i = 0; i < (*(int*)ptr); i++){
        printf("%s\n", s);
    }
    pthread_exit(NULL);
}

