#include<stdio.h>

void scaleArray(int arr[],int length, int scaleFactor)
{
	for(int i=0 ; i<length;i++){
		arr[i]*=scaleFactor;
	}
}

 int main()
{
	int length,scaleFactor;
	printf("enter the length of an array\n");
	scanf("%d",&length);
	int array[length];
	printf("enter the elements of an array\n");
	for(int i=0;i<length;i++)
	{
		scanf("%d",&array[i]);

	}
	printf("enter the scale factor:");
	scanf("%d",&scaleFactor);
	printf("array before scaling:\n");
	for(int i=0;i<length;i++)
	{
		printf("%d",array[i]);
	}
	printf("\n");
	scaleArray(array,length,scaleFactor);
	printf("array after scaling:\n");
	for(int i=0;i<length;i++)
	{
		printf("%d",array[i]);
	}
	printf("\n");
	return 0;
}