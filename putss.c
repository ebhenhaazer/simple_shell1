#include "shell.h"

/**
 * _puts - Prints a string to standard output
 * @string: String to be printed
 *
 * Return: string
 */

void _puts(char *string)
{
	int index = 0;

	while (string[index] != '\0')
	{
		_putchar(string[index]);
		index++;
	}

	_putchar('\n');
}

/**
 * _putchar - Writes the character c to stdout
 * @c: Character to be printed
 *
 * Return: 1 if true, 0 if false
 * On error return -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
