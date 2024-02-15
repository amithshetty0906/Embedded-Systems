#include<stdio.h>

int main(){
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    
    printf("factors are\n");

    for(int i=1;i<num;i++){
        if(num % i ==0 ){
            printf("%d  ",i);
        }
    }
    return 0;
}