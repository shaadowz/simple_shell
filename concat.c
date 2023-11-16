#include "shell.h"

/**
 * concat_all - concats three (3) strings in a newly allocated memory
 * @name: first string
 * @sep: seconf string
 * @value: third string
 *
 * Return: Pointer to the new string
 */

char *concat_all(char *name, char *sep, char *value)
{
	size_t totalLength = 0;
	char *result;
	char *current;

	if (name != NULL) 
		totalLength += strlen(name);
	if (sep != NULL) 
		totalLength += strlen(sep);
	if (value != NULL) 
		totalLength += strlen(value);

	result = (char *)malloc(totalLength + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	current = result;
	if (name != NULL)
	{
		while (*name != '\0')
		{
			*current = *name;
			current++;
			name++;
		}
	}

	if (sep != NULL)
	{
		while (*sep != '\0')
		{
		*current = *sep;
		current++;
		sep++;
		}
	}
	if (value != NULL)
	{
		while (*value != '\0')
		{
			*current = *value;
			current++;
			value++;
		}
	}
	*current = '\0';
	return (result);
}
