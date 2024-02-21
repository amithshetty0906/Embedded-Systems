#include<stdio.h>
#include<stdlib.h>

int small_number(int a[],int l)
{
int i;
int small=a[0];
for(i=1;i<l;i++)
{
	if(a[i]<small)
	{
	small=a[i];
	}
}
return small;
}

int main(int argc, char const *argv[])
{
	int smallest;
	int array[] = {1,2,3,4,0,5,6};
	int length = sizeof(array)/sizeof(int);
	printf("%d\n",length );
	smallest=small_number(array, length);
	printf("%d", smallest);
	return 0;
}