#include "shell.h"
/**
 * main_arg - Argument functions
 * @ac: Number of arguments
 * @av: Arguments
 * @env: The environment
 *
 * Return: Always 0
 */
int main_arg(int ac, char **av, char **env)
{
	int path = 0, stat = 0, pathv = 0;
	char *line = NULL, **com = NULL;
	(void)ac;
	while (1)
	{
		errno = 0;
		line = _getl_cmd();
		if (line == NULL && errno == 0)
			return (0);
		if (line)
		{
			pathv++;
			com = tokenn(line);
			if (!com)
				free(line);
			if !(_strcmp(com[0], "env"))
				_getenv(env);
			else
			{
				path = _values_path(&com[0], env);
				status = _fork_fun(com, av, env, line, path, pathv);
				if (stat == 200)
				{
					free(line);
					return (0);
				}
				if (path == 0)
					free(com[0]);
			}
			free(com);
		}
		else
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			exit(stat);
		}
		free(line);
	}
	return (stat);
}
