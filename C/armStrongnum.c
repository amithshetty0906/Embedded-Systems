#include<stdio.h>

int main(){
    int num,originalnum,remainder,result=0;

    printf("enter three digit number");
    scanf("%d",&num);

    originalnum = num;

    while(originalnum!=0){
        remainder = originalnum % 10;

        result += remainder*remainder*remainder;
        originalnum /=10;
    }

    if(result==num)
        printf("%dis armstroong number\n",num);
        else 
        printf("%dis not armstrong number",num);
    
}