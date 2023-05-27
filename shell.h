#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>

int _putchar(char c);
char *_strcat(char *destination, char *s);
int _strlen(char *s);
char *_getpath(char **env);
//int fork_s(char **args, char *argv[], char **env, char *l, int pid, int ch);
int lsh_cd(char **args);
int lsh_ctrld(char **args);
int lsh_help(char **args);
int lsh_exit(char **args);
int _strcmp(char *s1, char *s2);
size_t _strncmp(char *s1, char *s2, size_t num);
char *_strcpy(char *destination, char *source);
char *_getpath(char **env);
//char *getl_cmd(void);
void _getenviron(char **env);
extern char **environ;
char **tokenn(char *ptr);
int _val_path(char **env, char **arg);
void _exit_command(char **args, char *lineptr, int _exit);
char *_getline(void);

#endif
