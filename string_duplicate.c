#include "shell.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 * @str: pointer to a string
 * Return: pointer to a string
 */
char *_strdup(char *str)
{
	int x, y;
	char *current;

	if (!str)
	{
		return (NULL);
	}
	for (y = 0; str[y] != '\0';)
	{
		y++;
	}
	current = malloc(sizeof(char) * y + 1);
	if (!current)
	{
		return (NULL);
	}
	for (x = 0; x < 1; x++)
	{
		current[x] = str[x];
	}
	current[y] = str[y];
	return (current);
}
