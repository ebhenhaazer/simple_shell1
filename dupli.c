#include "shell.h"

/**
 * _strdup - Duplicates a string
 * @string: Char
 *
 * Return: Char
 */

char *_strdup(char *string)
{
	int length = 0, index;
	char *cpy;

	if (string == NULL)
		return (NULL);

	while (string[length] != '\0')
		length++;

	cpy = malloc(sizeof(char) * (length + 1));

	if (cpy == NULL)
		return (NULL);

	for (index = 0; index < length; index++)
		cpy[index] = string[index];

	cpy[length] = '\0';

	return (cpy);
}
