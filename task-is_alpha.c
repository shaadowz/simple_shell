#include "shell.h"

/**
 * interactive - returns true if shell is in interactive mode
 * @infor: struct address
 *
 * Return: 1 if true, 0 otherwise
 */

int interactive(info_t *info)
{
        return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_dm - checks if character is delimeter
 * @c: the character to check
 * @dm: the delimeter string
 * Return: 1 if true, 0 if false
 */

int is_dm(char c, char *dm)
{
	while (*dm)
		if (*dm++ == c)
			return (1);
	return (0);
}

/**
 * is_alpha - checks for alphabetic character
 * @c: the character to input.
 * Return: 1 if c is alphabetic, 0 otherwise.
 */

int is_alpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * is_charint - converts string to an integer
 * @x: the string to be converted
 * Return: 0 if no numbers in string, converted number otherwise
 */

int is_charint(char *x)
{
	int j, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (j = 0; x[j] != '\0' && flag != 2; j++)
	{
		if (x[j] == '-')
			sign *= -1;
		if (x[j] >= '0' && x[j] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (x[j] - '0');
		}
		else if (flag== 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
