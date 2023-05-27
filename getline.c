#include "shell.h"

/**
 * _getline - gets input
 *
 * Return: Input
 */

char *_getline(void)
{
	char *ptr = NULL;
	size_t user = 0;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);

	if (getline(&ptr, &user, stdin) == -1)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
