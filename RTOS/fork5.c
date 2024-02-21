/*Spawn (create) a child process which executes ls command*/

#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>

int main(){
    pid_t pid;
    pid=fork();

    if(pid<0){
        printf("fork failed");
    }
    else if(pid==0){
        printf("child process executing ls command\n");
        execlp("ls","ls",NULL);
    }
    else{
        int status;
        waitpid(pid,&status,0);
        printf("I am parent with pid %d\n",getpid());
    }
    return 0;
}

