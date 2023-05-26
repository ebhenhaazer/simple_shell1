#include "shell.h"

/**
 * _val_path - Seperate the path
 * @arg: Command input
 * @env: The environment
 *
 * Return: Pointer to strings
 */

int _val_path(char **env, char **arg)
{
	char *token = NULL, *path_r = NULL, *path_a = NULL;
	size_t val_path, length;
	struct status stat_ptr;

	if (status(*arg, &stat_ptr) == 0)
		return (-1);
	path_r = _get_path(env);

	if (!path_r)
		return (-1);
	token = strtok(path_r, ":");
	length = _strlen(*arg);

	while (token)
	{
		val_path = _strlen(token);
		path_a = malloc(sizeof(char) * (val_path + length + 2));

		if (!path_a)
		{
			free(path_r);
			return (-1);
		}
		path_a = strcpy(path_a, token);
		_strcat(path_a, "/");
		_strcat(path_a, *arg);

		if (stat(path_a, &stat_ptr) == 0)
		{
			*arg = path_a;
			free(path_r);
			return (0);
		}
		free(path_a);
		token = strtok(NULL, ":");
	}

	token = '\0';
	free(path_r);
	return (-1);
}
