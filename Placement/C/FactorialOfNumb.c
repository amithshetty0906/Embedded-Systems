#include<stdio.h>

int main(){
    unsigned long long factorial=1;
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    if(n<0)
        printf("factorial does not exist for negative number\n");
    else{
        for(int i=1;i<=n;i++){
            factorial *= i;
        }
        printf("%llu is the factorial",factorial);
    }
}
