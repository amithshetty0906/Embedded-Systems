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
        printf("i'm 1st child \n");
        execl("/bin/ls","ls",NULL);
    }
    else if(id >0 )
    {
        int status ;
        waitpid(id,&status,0);
        id =fork();
        if(id < 0)
        {
            printf("child creation failed \n");
            exit(-1);
        }
        else if(id == 0)
        {
            printf("i'm 2nd child \n");
            execl("/bin/date","date",NULL);
            
        }
        else if(id >0 )
        {
            int status ;
            waitpid(id,&status,0);
            printf("I'm parent my id\n");
            id =fork();
            if(id < 0)
            {
                printf("child creation failed \n");
                exit(-1);
            }
            else if(id == 0)
            {
                printf("i'm 3rd child \n");
                execl("/bin/pwd","pwd",NULL);
            }
            else if(id >0 )
            {
                int status ;
                waitpid(id,&status,0);
                printf("I'm parent my id\n");
                
            }
            
        }
      
        
    }
    return 0;
}