/*Spawn a child which executes copy command cp (Note: the copy command
takes 2 arguments meant for source filename and destination file name.*/

#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>

int main(){
    pid_t pid;
    pid=fork();

    if(pid<0){
        printf("fork failed\n");
    }
    else if(pid==0){
        printf("i am the child with pid %d\n",getpid());
        execlp("/bin/cp","cp","source.txt","dest.txt",NULL);
    }
    else{
        int status;
        waitpid(pid,&status,0);
        printf("I am parent with id %d\n",getpid());
    }
    return 0;
}