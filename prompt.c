#include "shell.h"

void print_prompt(const char *prompt)
{	
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, prompt, strlen(prompt));
}
