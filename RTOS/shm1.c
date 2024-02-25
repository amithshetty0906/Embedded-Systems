/*To demonstrate the usage of the various shared memory system 
calls- WAP which creates a shared memory segment of length 100 bytes
and writes 'A' to 'Z' to it. 
Next, let the same program access the segment area and display its 
contents to the screen (all 100 bytes).Let the program next convert 
the case of the alphabets in the segment to lowercase. Finally let 
the program access the same area and display the segment contents 
once again to the screen. Observe the output.*/

#include<stdio.h>
#include<stdlib.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<ctype.h>

int main(){
    int shmid;
    char *shmaddr;
    shmid = shmget(IPC_PRIVATE,100,IPC_CREAT | 0666);
    if(shmid == -1){
        perror("shmget");
        exit(1);
    }
    shmaddr = (char*)shmat(shmid,NULL,0);
    for(char c='A';c<='Z';c++)
        *shmaddr = c;
    shmaddr++;


    shmaddr = (char*)shmat(shmid,NULL,0);
    printf("Initial contents are %s\n",shmaddr);

    for(int i=0;i<100;i++){
        if(isupper(shmaddr[i])){
            shmaddr[i]=tolower(shmaddr[i]);
        }
    }
    shmaddr=(char*)shmat(shmid,NULL,0);
    printf("MOdified contents are %s\n",shmaddr);


    shmdt(shmaddr);
    shmctl(shmid,IPC_RMID,NULL);
    return 0;
}