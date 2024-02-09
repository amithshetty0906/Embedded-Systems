#include<stdio.h>

int sumofn();

int main(){
    int n,result;

    printf("enter a number\n");
    scanf("%d",&n);

    result = sumofn(n);
    printf("the sum of first n numbers is %d\n",result);
}

int sumofn(int n){
    if(n!=0)
        return n +sumofn(n-1);
    else
        return n;
}
