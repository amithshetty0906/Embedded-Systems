#include<stdio.h>

int main(){
    int first,second,temp;
    printf("enter the first number\n");
    scanf("%d",&first);
    printf("enter the second number\n");
    scanf("%d",&second);
    temp=first;
    first=second;
    second=temp;
    printf("after swapping\n");
    printf("first number is %d\n",first);
    printf("second number is %d",second);

}
