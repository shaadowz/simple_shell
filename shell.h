#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>
#include <stddef.h>
#include <sys/stat.h>
#include <signal.h>



void _puts(char *str);
int _putchar(char c);
int _strlen(char *s);
char *concat_all(char *name, char *sep, char *value);
char *_strdup(char *str);
void sig_handler(int sig_num);
void _EOF(int len, char *buff);
void _isatty(void);
void print_prompt(const char *prompt);

char **splitstring(char *str, const char *delim);
void execute(char **argv);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

extern char **environ;

/**
 * struct mybuild - points to function with same builtin caommand
 * @name: builtin command
 * @func: execute the builtin command
 */

typedef struct mybuild
{
	char *name;
	void (*func)(char **);
} mybuild;

void my_exit(char **arv);
#endif
