#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>

extern char **environ;
void _puts(char *str);
int _putchar(char c);
int _strlen(char *s);
char *concat_all(char *name, char *sep, char *value);
char *_strdup(char *str);
void sig_handler(int sig_num);
void _EOF(int len, char *buff);
void _isatty(void);
void print_prompt(const char *prompt);
void exec_comm(char **argv);
char **word_list(char *str, char *delim);
size_t token(char *str, char *delim);
void _unsetenv(char **arv);
void _setenv(char **arv);
void env(char **arv __attribute__ ((unused)));
char *_getenv(const char *name);

#endif
