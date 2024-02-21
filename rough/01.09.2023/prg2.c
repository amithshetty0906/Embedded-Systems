#include<sys/types.h>
#include<wait.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	int id,z=255;

	printf("I'm the main ...%d\n\n", getpid());
		id = fork();
		if(id<0){
			printf("Fork error ");
		exit(-1);
	}

	else if(id == 0)
	{

			//child process after the fork
	}
			

}

