/*3. (i) Create a child process from a program. Let the child process first sleep for
8 seconds and then output a message namely “I am the child”. Parent outputs a
message namely ‘I am the parent’ and then waits for the child to complete.
Execute the program and observe the result.
What happens if there is no wait in the parent? Observe.*/

#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>

int main(){
    pid_t pid;
    int counter =0;
    int status=0;
    int z=255;
    pid=fork();

    if(pid<0){
        printf("fork failed");
    }
    else if(pid==0){
        sleep(8);
        printf("I am the child with pid %d\n",getpid());
    }
    else{
        printf("hello i am the parent with pid %d\n",getpid());
        waitpid(pid,&status,0);
        printf("Parent: child process completed\n");
    }
}