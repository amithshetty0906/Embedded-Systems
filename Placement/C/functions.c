#include <stdio.h>

int additions(int a,int b){
    int sum=0;
    sum = a+b;
   return sum;
}

int main(){
    //int c,d;
    int sum,a=0,b=0;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    sum = additions(a,b);;
    printf("Answer is %d",sum);
}


