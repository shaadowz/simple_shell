#include "shell.h"

/**
 * my_exit - exits the shell with or without a return of status n
 * @arv: array of words of the entered line
 */
void my_exit(char **arv)
{
	int x, y;

	if (arv[1])
	{
		y = _atoi(arv[1]);
		if (y <= -1)
			y = 2;
		free(arv);
		exit(y);
	}
	for (x = 0; arv[x]; x++)
		free(arv[x]);
	free(arv);
	exit(0);
}
