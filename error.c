#include "shell.h"

/**
 * _puts - Prints a string
 * @str: String to print
 *
 * Return: void
 */

void _puts(char *str)
{
	size_t length;
	ssize_t num_wr;

	length = _strlen(str);
	num_wr = write(STDOUT_FILENO, str, length);

	if (num_wr == -1)
		perror("write");
}

/**
 * _puterror - Prints an error message
 * @err: Error message to be printed
 *
 * Return: void
 */

void _puterror(char *err)
{
	size_t length;
	ssize_t num_wr;

	length = _strlen(err);
	num_wr = write(STDERR_FILENO, err, length);

	if (num_wr == -1)
		perror("write");
}
