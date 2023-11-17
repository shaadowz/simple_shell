#include "shell.h"

int main(void)
{
	ssize_t input_len = 0; 
	size_t size = 0;
	char *lineptr;
	char * value;
	char *pathname;
	char **arv;
	

	signal(SIGINT, signal_handler);
	while ((input_len = getline(&lineptr, &size, stdin)) != -1)
	{
		print_prompt("#cisfun$ ");
		handle_EOF(input_len, lineptr);
		arv = word_list(lineptr, "\n");
		if (!arv || !arv[0];
			exec_command(arv);
		else
		{
			value = _genenv("PATH");
		}
	}
	free(lineptr);
	return (0);
}
