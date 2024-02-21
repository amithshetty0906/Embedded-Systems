/*2. WAP which forks a new process. Let the child process initiate a counter to
zero and keep incrementing it until it reaches 999. Let it exit with a
value 255. Let the parent use the waitpid() system for the child to complete. And once the
child completes the parent displays a message namely “Parent: Child
processcompleted". Also let the parent output the exit value (exit status) of the
child. What happens if there is no waitpid() in the parent? Observe.*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){
    pid_t pid;
    int status;

    pid=fork();

    if(pid<0){
        printf("fork failed");
        return 1;
    }
    else if(pid==0){
        int counter=0;
        while(counter<900){
            counter++;
        }
        printf("child: counter reached %d\n",counter);
        exit(255);
    }
    else{
        sleep(5);
        waitpid(pid,&status,0);
        if(WIFEXITED(status)){
            printf("parent: child process completed with exit status %d\n",WEXITSTATUS(status));
        }
        else{
            sleep(5);
            printf("parent: child process did not terminate\n ");
        }
        sleep(5);
        printf("parent: child process completed\n");
    }

}
