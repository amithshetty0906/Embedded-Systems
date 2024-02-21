#include<stdio.h>
#include<stdlib.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<ctype.h>

int main()
{
	int shmid;
	char *shmaddr;
	shmid = shmget(IPC_PRIVATE,100,IPC_CREAT | 0666);
	if(shmid == -1){
	perror("shmget");
	exit(1);
	}
	shmaddr = (char *)shmat(shmid, NULL,0);

	for(char c = 'A';c<='Z';c++)
		*shmaddr = c;
	shmaddr++;


shmaddr = (char *)shmat(shmid, NULL ,0);
printf("Initial contents:%s\n",shmaddr );

for(int i = 0;i<100;i++){
	if(isupper(shmaddr[i])){
		shmaddr[i] = tolower(shmaddr[i]);
	}
}

shmaddr = (char *)shmat(shmid, NULL,0);
printf("Modified contents:%s\n",shmaddr);
shmdt(shmaddr);
shmctl(shmid,IPC_RMID, NULL);
return 0;
}
