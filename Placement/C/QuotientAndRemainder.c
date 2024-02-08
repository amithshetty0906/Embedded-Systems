#include<stdio.h>

int main(){
    int quotient,dividend,divisor,remainder;
    printf("enter dividend\n");
    scanf("%d",&dividend);
    printf("enter divisor\n");
    scanf("%d",&divisor);
    quotient=dividend/divisor;
    remainder=dividend%divisor;
    printf("quotient is %d\n",quotient);
    printf("remainder is %d\n",remainder);
    printf("size of remainder is  %zu",sizeof(remainder));

}
