#include "shell.h"

/**
 * _strlen - Prints the length of string
 * @s: Pointer to the string
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
	{
		x++;
	}
	return (x);
}
