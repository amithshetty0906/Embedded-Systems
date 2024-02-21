#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
    int id = 0;
    id =fork();
    if(id < 0)
    {
        printf("child creation failed \n");
        exit(-1);
    }
    else if(id == 0)
    {
        printf("i'm child \n");
        execl("/bin/cp","cp","test.txt","dest.txt",NULL);
    }
    else if(id >0 )
    {
        int status ;
        waitpid(id,&status,0);
        printf("I'm parent my id is  =%d \n",getpid());
        
    }
    return 0;
}