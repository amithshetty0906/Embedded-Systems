//write a program which forks new process. both parent as well as child processes should display their process ids to screen. {use getpid(), getpid() system calls}

#include<stdio.h>
#include<unistd.h>

int main(){
    pid_t pid;

    pid=fork();

    if(pid<0){
        printf("fork failed");
        return 1;
    }

    else if(pid==0){
        printf("Child process id is %d\n",getpid());
    }
    else{
        printf("Parent process id is %d\n",getpid());
    }

return 0;

}