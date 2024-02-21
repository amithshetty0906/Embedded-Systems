/*Spawn a child process which executes ls command with option –l*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){
    pid_t pid;
    pid=fork();

    if(pid<0){
        printf("fork failed");
    }
    else if(pid==0){
        printf("child id executing ls command with option –l\n");
        execlp("ls","ls","-1",NULL);
    }
    else{
        int status;
        waitpid(pid,&status,0);
        printf("I am the parent with pid %d\n",getpid());
    }
    return 0;
}