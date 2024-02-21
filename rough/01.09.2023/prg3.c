#include<sys/types.h>
#include<wait.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	int var;
	var =fork();
	if(var==0)
	{
		sleep(8);
		printf("I am the child and my id is %d\n",getpid());

	}

	else if(var>0)
	{
		printf("i am the parent and my pid:%d\n",getpid());
		//wait(0);
	}
	return 0;
}