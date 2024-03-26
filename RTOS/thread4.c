/*4. Write a program which defines a global integer array. Let the main 
read the length of the array and populate it. Next it creates 2 
threads. Let the main pass the array length to the 2 threads. One 
thread computes the sum of array elements and outputs the result. The
second thread publishes all odd numbers present in the array. {Use 
pthread_join() in the main, so that it waits for the threads to 
finish their execution.} */

#include<stdio.h>
#include<pthread.h>
#include<sys/types.h>
#include<unistd.h>

void *f1(void *ptr);
void *f2(void *ptr);

int arr[100];
int n;

int main(){
    printf("enter the length of array\n");
    scanf("%d",&n);

    printf("enter %d elements of array\n",n);
    for (int  i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    pthread_t t1,t2;

    pthread_create(&t1,NULL,f1,NULL);
    sleep(5);
    pthread_create(&t2,NULL,f2,NULL);

    pthread_join(t1,NULL);
    pthread_join(t2,NULL);

    return 0; 
}


void *f1(void *ptr){
    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    printf("Sum of array %d\n",sum);
    return NULL;
}

void *f2(void *ptr){
    printf("Odd number in the array:\n");
    for(int i=0;i<n;i++){
        if(arr[i]%2 != 0){
            printf("%d\t",arr[i]);
        }
    }
    printf("\n");
    return NULL;
}
