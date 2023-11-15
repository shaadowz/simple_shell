#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void Print_prompt(void);
int _putchar(char c);
int _strlen(char *s);
char concat_all(char *id, char *sep, char *value);
char *_strdup(char *str);
void sig_handler(int sig_num);


#endif
