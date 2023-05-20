#ifndef SHELL_H
#define SHELL_H


/* Libraries in Shell Project */
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * struct nodelist - single list node
 * @v: node value
 * @txt: string connected with value
 * @n: pointer to next node
 */
struct nodelist
{
	int v;
	char *txt;
	struct nodelist *n;
};
typedef struct nodelist list_t;

/**
 * cmd_args - arguments passed in a function
*/
struct cmd_args
{
	char **argvv;
	int rdFd;
	int lineCountFlag;
	list_t *history;
	char *pth;
	char **env;
	char *args;
	unsigned int lineCount;
	list_t *aliass;
	int envCd;
	int cmdBufT;
	list_t *environ;
	char **cmdBuffer;
	int st;
	int argcc;
	char *fnm;
	int errNumber;
	int histCnt;
};
typedef struct cmd_args args_t;

/* shell Project Prototypes */
list_t *addnode_(list_t **head, const char *string, int length);
int atoi_(char *i);
int _isalpha(int c);
void _puts(char *string);
char *strcat_(char *destination, char *source);
char *_strdup(char *string);
char *strcpy_(char *destination, char *source);
int _septr(char ch, char *s);
char *search_substr(const char *s, const char *subs);
int _strln(char *str);
int _strcmp(char *str1, char *str2);
int isintiv(args_t *args);
/* int isintact(info_t *info); shocked.c */

ssize_t node_inx(list_t *hd, list_t *node);
list_t *using_prefix(list_t *hd, char *prefx, char c_next);
size_t linked_ls_print(const node_t *hd);
char **list2str(list_t *hd);
size_t get_length(const node_current *hd);
list_t *addnode_(list_t **head, const char *string, int length);
list_t *addnode_end(list_t **head, const char *string);
size_t printlist_str(const list_t *h);
int deletenode_at_index(listint_t **headd, unsigned int index);
size_t len_list(const list_t *h);

int _putchar(char c);
free_list(list_t *head);
size_t list_length(const list_t *head);


#endif
