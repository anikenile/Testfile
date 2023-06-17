#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

/**
 */
int main()
{
	pid_t pid;
	pid_t ppid;

	pid = getpid();
	ppid = getppid();
	printf("PID of this process is: %d\n", pid);
	printf("PPID of this process is: %d\n", ppid);
	return 0;
}
