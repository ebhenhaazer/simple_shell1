#include "shell.h"

/**
 * _getl_cmd - function command to obtain inputs to shell
 * Return: Input if success.
 */
char *_getl_cmd(void)
{
	size_t user_c = 0;
	char *line = NULL;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);
	if (getline(&user_c, &line, stdin) == -1)
	{
		free(line);
		return (NULL);
	}
	return (line);
}
