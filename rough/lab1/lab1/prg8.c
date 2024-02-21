#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str[]="My name is shrivatsa";
	int nletter=0,nspace=0;
	int i=0;
	while(str[i]!='\0')
	{
		char ch = str[i];
		if(ch>='A' && ch<='Z' || ch>= 'a' && ch<='z')
			nletter++;
			else if (ch == ' ' || ch == '\n' || ch == '\t' )
				nspace++;
			i++;
	}
	printf("letters:%d\t space:%d\n",nletter,nspace );
	return 0;

}