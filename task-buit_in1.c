#include "shell.h"

/**
 * let_exit - exits the shell
 * @info: the structure containing potential arguments.
 *
 * Return: exists (0) if info.argv[0] != "exit"
 */

int let_exit(info_t *info)
{
	int exit;

	if (info->argv[1])
	{
		exit = _erratoi(infor->argv[1]);
		if (exit == -1)
		{
			info->status = 2;
			print_erro(info, "Forbidden number: ");
			_eputs(info->argv[1]);
			_putchar('\n');
			return (1);
		}
		info->err_num = erratoi(
