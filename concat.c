#include "shell.h"

/**
 * concat_all - concats three (3) strings in a newly allocated memory
 * @id: first string
 * @sep: seconf string
 * @value: third string
 *
 * Return: Pointer to the new string
 */

char concat_all(char *id, char *sep, char *value)
{
	char *outcome;
	int x1, x2, x3, i, j;

	x1 = _strlen(id);
	x2 = _strlen(sep);
	x3 = _strlen(value);

	outcome = malloc(x1 + x2 + x3 + 1);
	if (outcome == NULL)
	{
		return (NULL);
	}

	for (i = 0; id[i]; i++)
	{
		outcome[i] = id[i];
	}
	j = i;

	for (i = 0; sep[i]; i++)
	{
		outcome[j + i] = sep[i];
	}
	j = j + i;

	for (i = 0; value[i]; i++)
	{
		outcome[j + i] = value[i];
	}
	j = j + i;

	outcome[j] = '\0';

	return (outcome);
}
