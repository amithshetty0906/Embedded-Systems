/* Let a parent process create a segment of length 2k and write n 
strings to the area. Let the value of n be passed as a commandline 
argument. Next, let the parent fork a child.Let the child capitalise 
the first character of each string.Once the child completes let the 
parent access the shared area and display their contents to the 
screen.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/wait.h>
#include <ctype.h>

#define SEGMENT_SIZE 2048

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <number_of_strings>\n", argv[0]);
        return 1;
    }

    int num_strings = atoi(argv[1]);
    if (num_strings <= 0) {
        fprintf(stderr, "Number of strings must be a positive integer.\n");
        return 1;
    }

    // Create shared memory segment
    key_t key = ftok("shmfile", 65);
    int shmid = shmget(key, SEGMENT_SIZE, IPC_CREAT | 0666);
    if (shmid == -1) {
        perror("shmget");
        return 1;
    }

    // Attach shared memory segment
    char *shared_memory = (char*) shmat(shmid, NULL, 0);
    if (shared_memory == (char*) -1) {
        perror("shmat");
        return 1;
    }

    printf("Enter %d strings:\n", num_strings);
    for (int i = 0; i < num_strings; i++) {
        fgets(shared_memory + i * 100, 100, stdin);
    }

    pid_t pid = fork();
    if (pid == -1) {
        perror("fork");
        return 1;
    } else if (pid == 0) { // Child process
        
        for (int i = 0; i < num_strings; i++) {
            shared_memory[i * 100] = toupper(shared_memory[i * 100]);
        }
        exit(0);
    } else { // Parent process
        wait(NULL); 

        // Display contents of shared memory
        printf("\nStrings after capitalization:\n");
        for (int i = 0; i < num_strings; i++) {
            printf("%s", shared_memory + i * 100);
        }

        // Detach shared memory segment
        shmdt(shared_memory);

        // Remove shared memory segment
        shmctl(shmid, IPC_RMID, NULL);
    }

    return 0;
}
