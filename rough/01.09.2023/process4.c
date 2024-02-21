#include<sys/types.h>
#include<wait.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	int id;
	printf("I'm the parent %d",getpid());
	id=fork();
	if(id<0)
	{
		printf("error message\n");

	}

	else if(id==0)
	{   
		printf("I'm the child process here with id %d\n",getpid());
		execl("/bin/ls","ls",NULL);
		sleep(2);
	}

	else
	{

		printf("im the parent here\n");
			wait(NULL);
		printf("%d",getpid());

	}
	return 0;
}