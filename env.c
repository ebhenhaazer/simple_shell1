#include "shell.h"

/**
 * _env - Prints env var
 *
 * Return: void
 */

int _env(void)
{
	int index;

	for (index = 0; environ[index]; index++)
	{
		_puts(environ[index]);
		_putchar('\n');
	}

	return (0);
}
