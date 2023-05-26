#include "shell.h"

/**
 * _getenviron - function that prints env to standard output
 * @env: local environment
 */
void _getenviron(char **env)
{
	size_t r = 0;

	while (env[r])
		write(STDOUT_FILENO, env[r], _strlen(env[r]));
		write(STDOUT_FILENO, "\n", 1;
		r += 1;
}
