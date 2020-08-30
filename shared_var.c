#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, const char * argv[])
{
	int shared = 2;
	int pid = fork();

	if(pid) {
		shared = 1;
		printf("Luke i am ur father. My PID is %d and ur PID is %d. shared = %d\n", getpid(), pid, shared);
		wait(NULL);
		printf("I am your father again. shared = %d\n", shared);
	} else {
		shared = 0;
		printf("I am Luke. My PID is %d. shared = %d\n", getpid(), shared);
		sleep(2);
	}

	return 0;
}
