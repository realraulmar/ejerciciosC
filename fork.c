#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, const char * argv[])
{
	int pid = fork();

	if(pid) {
		printf("Luke i am ur father. My PID is %d and ur PID is %d\n", getpid(), pid);
	} else {
		printf("I am Luke. My PID is %d\n", getpid());
	}

	while(1);

	return 0;
}
