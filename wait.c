#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, const char * argv[])
{
	int pid = fork();

	if(pid) {
		printf("Luke i am ur father. My PID is %d and ur PID is %d\n", getpid(), pid);
		wait(NULL);
		printf("I am your father again\n");
	} else {
		printf("I am Luke. My PID is %d\n", getpid());
		sleep(2);
	}

	return 0;
}
