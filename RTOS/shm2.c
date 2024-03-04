/*Let a parent process create a segment of adequate length and 
write 0 to 9 as well as 'a' to 'z' to it.Next, let the parent fork a 
child.Let the child increment all the integers by a value 100. Also 
let it convert all the characters to upper case. Once the child 
completes, let the parent access the shared area and display their 
contents to the screen.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <ctype.h>

#define SHM_SIZE 100

int main(){
    pid_t pid;
    int shmid;
    char *shmaddr;
    int i;

    if((shmid = shmget(IPC_PRIVATE,SHM_SIZE,IPC_CREAT|0666))<0){
        perror("shmget");
        exit(1);
    }

    if((shmaddr = shmat(shmid,NULL,o))== (char*)-1){
        perror("shmat");
        exit(1);
    }

    
}