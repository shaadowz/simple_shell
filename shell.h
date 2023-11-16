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
void _unsetenv(char **arv);
void _setenv(char **arv);
void env(char **arv __attribute__ ((unused)));
int _atoi(char *s);
void(*checkbuild(char **arv))(char **arv);

/**
 * struct list_path - Linked list containing PATH directories
 * @dir: directory in path
 * @p: pointer to next node
 */

typedef struct list_path
{
	char *dir;
	struct list_path *p;
} list_path;

char *_getenv(const char *name);
list_path *add_node_end(list_path **head, char *str);
list_path *linkpath(char *path);
char *_which(char *filename, list_path *head);

#endif /* SHELL_H */
