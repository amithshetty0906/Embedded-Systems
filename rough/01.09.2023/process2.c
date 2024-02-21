#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>

int main()
{
	int id;

	printf("I'm the main ...%d\n\n", getpid());
		id = fork();
		if(id<0){
			//child process after the fork
			printf("I'm the first child with id %d \n",getpid() );
			printf("First child fork : HELLO MSIS\n");

			//use execl to execute 'date ' command
			//execlp("date","date",NULL);
			//if execlp fails,an error message will be printed
		}
		else
		{
			printf("I'm the parent with id : %d/n",getpid());
			wait(NULL);
			id =fork();
			if(id<0)
			{
				printf("process creation error\n");
				exit(1);
			}
			else if(id == 0)
			{
				
				printf("im the second child with pid %d\n",getpid());
				printf("executing ' date' command again:\n");

				execlp("date","date",NULL);
			

			}
			else
			{
				
				printf("Im the parent after the second fork with id %d\n",getpid());
				wait(NULL);
				id = fork();

				if(id<0){
					printf("process error creation\n");
					exit(1);
				}
				else if(id == 0 )
				{
					 
					printf(" im the third child with id %d\n",getpid());
					printf("Executing 'sample.exe' command:\n ");

						execlp("process.exe","process.exe",NULL);


				}
				else{
					printf("Im the parent after the third fork with pid%d\n",getpid());
					wait(NULL);
				}
			}
		}
}