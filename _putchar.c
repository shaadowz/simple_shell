#include "shell.h"

/**
 * _putchar - writes the character c to stdout 
 * @c: The character to print 
 *
 * Return: On Success.
 *
 * errno is set appropriately, and on erroe, -1 is returned.
 */

int _putchar(char *str)
{
	return (write(1, &c, 1));
}
