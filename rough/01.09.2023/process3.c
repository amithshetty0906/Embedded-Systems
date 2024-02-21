#include<sys/types.h>
#include<wait.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	int id;
	int counter = 0;
	int status=0,z=255;
	id=fork();
	if(id<0)
	{
		printf("Fork error ");
		exit(-1);
	}
	else if(id==0)
	{
		printf("I'm the shrivatsa with pid : %d\n",getpid());
		
	
		printf("exiting with value %d\n",z);
		exit(z);

	}

	else
	{
		printf("Hello , I am the parent here\n ");
		waitpid(id,&status,0);
		printf("Parent: child process completed\n ");
		printf("Parent/main process: the child process exited with status value %d\n",WEXITSTATUS(status));
		printf("------------END-------------\n");
	}
	return 0 ;
}