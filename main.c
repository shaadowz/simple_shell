#include "shell.h"

int main(void)
{
	ssize_t input_len = 0; 
	size_t size = 0;
	char *lineptr;

	print_prompt("#cisfun$ ");	
	while ((input_len = getline(&lineptr, &size, stdin)) != -1)
	{
		print_prompt("#cisfun$ ");
	}
	free(lineptr);
	return (0);
}
