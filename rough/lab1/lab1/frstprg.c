#include<stdio.h>
#include<stdlib.h>

int sum_of_no(int n )
{
int sum=0;
int i;
for(i=0;i<n;i++)
{
sum+=i;
}
return sum;
}

int main()
{
int number;
int sum;
scanf("%d",&number);
sum=sum_of_no(number);
printf("%d",sum);
return 0;
}
