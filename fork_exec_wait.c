#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int spawn (char* program, char** arg_list)
{
	pid_t child_pid;
	child_pid = fork();
	if (child_pid != 0)
		return child_pid;
	else
	{
		execvp (program, arg_list);
		fprintf(stderr,"an error occurred in execvp\n");
		abort();
	}
}

int main()
{
	int child_status = 1;
	pid_t cpid;
	char* arg_list[] =
	{
		"ls",
		"-l",
		"/",
		NULL
	};
	
	spawn(arg_list[0], arg_list);
	
	cpid = wait (&child_status);
	if(WIFEXITED(child_status))
	{
		printf("the child process exited normally, with exit code %d\n",WEXITSTATUS(child_status));
	}
	else
	{
		printf("the child process exitedd abnormally\n");
	}
	printf("the parent process ID is %d\n",(int)getpid());
	printf("the child process ID is %d\n",(int)cpid);
	printf("done with main program\n");
	return 0;
}