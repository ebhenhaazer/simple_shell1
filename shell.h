#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <limits.h>
#include <fcntl.h>
#include <ctype.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <errno.h>

void _puts(char *str);
void _puterror(char *err);
int _putchar(char c);
char *_strcat(char *destination, char *source);
int _strlen(char *s);
int _fork_s(char **arg, char **av, char **env, char *lineptr, int np, int c);
char *_getl_cmd(void);
char *_getpath(char **env);
int lsh_cd(char **args);
int lsh_ctrld(char **args);
int lsh_help(char **args);
int lsh_exit(char **args);
int _strcmp(char *s1, char *s2);
size_t _strncmp(char *s1, char *s2, size_t num);
char *_strcpy(char *destination, char *source);
char *_getpath(char **env);
void _getenviron(char **env);
extern char **environ;
char **tokenn(char *ptr);
int _val_path(char **env, char **arg);
void _exit_command(char **args, char *lineptr, int _exit);
char *_getline(void);
int main(int ac, char **av, char **env);
int _setenv(char **args);
int _unsetenv(char **args);
int _env(void);

#endif
