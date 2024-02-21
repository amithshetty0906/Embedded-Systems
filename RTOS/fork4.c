/*4. Create a child process which outputs your name to the screen and exits with a
value 255. Use wait() system call in the parent, for the child to complete
execution. Also use
the WEXITSTATUS macro to display the status value returned by the child.*/

#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>

int main(){
    pid_t pid;
    pid=fork();

    int counter=0;
    int status=0;
    int z=255;

    if(pid<0){
        printf("fork failed");
    }
    else if(pid==0){
        sleep(3);
        printf("I am AMITH with pid %d\n",getpid());
        printf("I am exiting with value %d\n",z);
        exit(z);
    }
    else{
        printf("Hello! i am the parent with pid %d\n",getpid());
        waitpid(pid,&status,0);
        sleep(3);
        printf("child process completed\n");
        printf("child process completed with exit status value %d\n",WEXITSTATUS(status));
    }
}