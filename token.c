#include "shell.h"

/**
 * tokenn - Tokenizes a string
 * @ptr: pointer to a line
 *
 * Return: A pointer
 */

char **tokenn(char *ptr)
{
	char **usr_cmd = NULL;
	size_t index = 0;
	int size;
	char *token = NULL;

	if (ptr == NULL)
		return (NULL);

	for (index = 0; ptr[index]; index++)
	{
		if (ptr[index] == ' ')
			size++;
	}

	if ((size + 1) == _strlen(ptr))
		return (NULL);

	usr_cmd = malloc(sizeof(char *) * (size + 2));
	if (usr_cmd == NULL)
		return (NULL);

	token = strtok(ptr, " \n\t\r");

	for (index = 0; token != NULL; index++)
	{
		usr_cmd[index] = token;
		token = strtok(NULL, " \n\t\r");
	}

	usr_cmd[index] = NULL;

	return (usr_cmd);
}
