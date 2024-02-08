#include<stdio.h>

int main(){

    int number;
    printf("enter the number\n");
    scanf("%d",&number);
    if(number%2==0)
        printf("it is even");
    else
        printf("it is odd");
    return 0;
}
