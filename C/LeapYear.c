#include<stdio.h>

int main(){
    int year;
    printf("enter the year\n");
    scanf("%d",&year);
    if(year%4==0 || year%400==0){
        printf("%d is a leap year",year);
    }
    else
        printf("%d is not a leap year",year);
}


/*int main(){
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if(a>0.00)
        printf("%d is positive",a);
    else
        if(a==0.00)
        printf("you entered zero");
    else
        printf("%d is negative",a);
    return 0;
}*/
