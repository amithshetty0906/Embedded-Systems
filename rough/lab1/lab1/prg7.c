#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 100

int main()
{
	char str[]="batsman";
	
	int i,a=0,b=0;
		
		i=0;
		while(str[i]!= '\0')
		{
			if(str[i]== 'a' )
			{
				a++;
			}
			else if(str[i]=='b')
			{
				b++;
			}
			i++;
		}

		printf("%d%d",a,b);
		return 0;
}