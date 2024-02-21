/*Fork 3 children . One of them executes ls, another date and the third pwd
command. Run the program and observe the results on each run.*/

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
        printf("i am  the first child with pid %d\n",getpid());
        execlp("/bin/ls","ls",NULL);
    }
    else if(pid>0){
        int status;
        waitpid(pid,&status,0);
        printf("I am the parent with pid %d\n",getpid());
        pid=fork();
        if(pid<0){
            printf("fork failed\n");
        }
        else if(pid==0){
            printf("I am the second child with pid %d\n",getpid());
            execlp("/bin/date","date",NULL);
        }
        else if(pid>0){
            int status;
            waitpid(pid,&status,0);
            printf("I am the parent with pid %d\n",getpid());
            pid=fork();
            if(pid<0){
                printf("fork failed\n");
            }
            else if(pid==0){
                printf("I am the third child with pid %d\n",getpid());
                execlp("/bin/pwd","pwd",NULL);
            }
            else{
                int status;
                waitpid(id,&status,0);
                printf("I am the parent with pid %d\n",getpid());
            }
        }
    }
}