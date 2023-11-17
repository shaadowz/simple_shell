#include "shell.h"

size_t token(char *str, char *delim)
{
	size_t word_count = 0;

	str = _strdup(str);
	if (strtok(str, delim))
		++word_count;
	while (strtok(NULL, delim))
		++word_count;
	return word_count;
}


char **word_list(char *str, char *delim)
{
	char **arr = NULL;
	size_t arr_iter = 0;
	size_t arr_size = 0;
	size_t str_size = strlen(str);
	char prev_char = '\0';
	str = _strdup(str);

	if ((arr_size = token(str, delim)) > 0)
	{
		arr = malloc(sizeof(char *) * (arr_size + 1));
		if (arr == NULL)
		{
			exit(EXIT_FAILURE);
		}
	for (size_t str_iter = 0; str_iter < str_size; ++str_iter)
	{
		if (str[str_iter] != '\0' && prev_char == '\0')
		{
			arr[arr_iter] = str + str_iter;
			++arr_iter;
		}
		prev_char = str[str_iter];
	}
	arr[arr_iter] = NULL;
	}
	return arr;
}
