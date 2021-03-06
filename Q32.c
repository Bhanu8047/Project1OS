//Made by Bhanu B50 1610006 K1611
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include<stdio.h>


int zombie();
int orphan();

int main()
{
	zombie();//calling zombie process
	orphan();//calling orphan process
	
	return 0;
}
int zombie()
{
    // Fork returns process id
    // in parent process
    pid_t child_pid = fork();
 
    // Parent process 
    if (child_pid > 0)
        sleep(50);
 
    // Child process
    else       
      {
      	printf("Zombie process");
		  exit(0);
		}
    return 0;
}
int orphan()
{
    // Create a child process      
    int pid = fork();
 
    if (pid > 0)
        printf("in parent process");
 
    // Note that pid is 0 in child process
    // and negative if fork() fails
    else if (pid == 0)
    {
        sleep(30);
        printf("in child process");
    }
 
    return 0;
}
