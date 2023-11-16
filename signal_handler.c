#include "shell.h"

/**
 * signal_handler - checks if control c (ctrl c) is pressed
 * @sig_num: int
 */
void signal_handler(int sig_num)
{
	if (sig_num == SIGINT)
	{
		print_prompt("\n#cisfun$ ");
	}
}
