#include "shell.h"

/**
 * _getpath - function to obtain PATH to variable
 * @env: local environment
 * Return: PATH value
 */
char *_getpath(char **env)
{
	char *p = NULL
	size_t i = 0;

	var = 0;

	c = 5;

	for (i = 0; _strcompare(env[i], "PATH=", 5); i++)
		if (env[i] == NULL)
			return (NULL);
	for (c = 5; env[i][var]; c++, var++)
		p = malloc(sizeof(char) * (c + 1));
	if (p == NULL)
		return (NULL);
	for (c = 0, var = 5; env[i][var]; c++, var++)
		p[c] = env[i][var];
	p[c] = '\0';
	return (p);
}
