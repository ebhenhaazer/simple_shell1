#include "shell.h"

/**
 * _setenv - Set value of an env
 * @args: Arguments
 *
 * Return: nothing
 */

int _setenv(char **args)
{
	char *n, *val;

	if (args[1] == NULL || args[2] == NULL)
	{
		_puterror("Usage: setenv VAR VALUE\n");
		return (-1);
	}

	n = args[1];
	val = args[2];

	if (setenv(n, val, 1) != 0)
	{
		_puterror("setenv");
		return (-1);
	}

	return (0);
}

/**
 * _unsetenv - Unset value of env
 * @args: Arguments
 *
 * Return: nothing
 */

int _unsetenv(char **args)
{
	char *n;

	if (args[1] == NULL)
	{
		_puterror("Usage: unsetenv VAR\n");
		return (-1);
	}

	n = args[1];

	if (unsetenv(n) != 0)
		_puterror("unsetenv");

	return (0);
}
