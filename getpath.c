#include "shell.h"

/**
 * _getpath - function to obtain PATH to variable
 * @env: local environment
 * Return: PATH value
 */
char *_getpath(char **env)
{
	char *p = NULL;
	size_t i = 0;
	size_t var = 0;
	size_t c = 5;

	for (i = 0; _strncmp(env[i], "PATH=", 5); i++)
		;
	if (env[i] == NULL)
		return (NULL);

	for (c = 5; env[i][var]; var++, c++)
		;
	p = malloc(sizeof(char) * (c + 1));

	if (p == NULL)
		return (NULL);

	for (var = 5, c = 0; env[i][var]; var++, c++)
		p[c] = env[i][var];

	p[c] = '\0';
	return (p);
}
