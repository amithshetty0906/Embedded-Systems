#include<stdio.h>

int largest(int arr[5],int size){
    int max = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("%d is max",max);
    return max;
    
}

int main(){
    int arr[5];
    printf("enter the elements\n");
    for(int i=0;i<5;i++){
        scanf("%d ",&arr[i]);
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    largest(arr,size);
    return 0;
}