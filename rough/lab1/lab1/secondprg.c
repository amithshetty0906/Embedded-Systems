#include<stdio.h>
#include<stdlib.h>

int sum_of_digit(int n)
{
int sum=0;
int rem;
while(n! =0)
{
rem=n%10;
sum=sum+rem;
n=n/10;
}
return sum;
}

int main()
{
int number;
int sum;
printf("enter the number\n");
scanf("%d",&number);
sum=sum_of_digit(number);
printf("the sum of digits is %d\n",sum);
return 0;
}
