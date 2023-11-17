#include "shell.h"

/**
 * exec_comm - executes a command
 * @argv: array of arguments
 */

void exec_comm(char **argv)
{

	ssize_t pid;
	int status;

	if (!argv || !argv[0])
		return;
	pid = fork();
	if (pid == -1)
	{
		perror(_getenv("_"));
	}
	if (pid == 0)
	{
		execve(argv[0], argv, environ);
			perror(argv[0]);
		exit(EXIT_FAILURE);
	}
	wait(&status);
}
