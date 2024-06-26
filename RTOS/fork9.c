/*. Write a program which forks a new process. Let the child process compute the
summation of first n natural numbers, and let it output the result. Pass ‘n’ as a
commandline argument. The parent waits for the child to complete and finally
the parent process too outputs the result.*/

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(char argc , char *argv[]){
    int id = 0;
    id =fork();
    if(id < 0){
        printf("child creation failed \n");
        exit(-1);
    }
    else if(id == 0){
        printf("i'm child with pid %d\n",getpid());
        if(argc > 0){
            unsigned int data = strtoul(argv[1],NULL,10);
            unsigned int sum_value = (data*(data+1))/2;
            printf("Sum of n %d natural numbers is %d\n",data,sum_value);
            exit(sum_value);
        }
        else{
            printf("Pass arguement through cmd\n");
        }
 
    }
    else if(id >0 ){
        int status ;
        waitpid(id,&status,0);
        printf("I'm parent with pid %d\n",getpid());
        printf("Output of something that run on child %d \n",WEXITSTATUS(status));
    }
    return 0;
}