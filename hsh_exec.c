#include "shell.h"
int lsh_cd(char **args);
int lsh_ctrld(char **args);
int lsh_help(char **args);
int lsh_exit(char **args);

/**
 * builtin_f - Builtin commands listed, and related functions.
 * lsh_cd: handle directory
 * lsh_ctrld: handle listin
 * lsh_help: help command line
 * lsh_exit: exit shell
 *
 * builtin_f: function to handle shell commands.
 *
 */

int (*builtin_f[])(char **) = {&lsh_cd, &lsh_ctrld, &lsh_help, &lsh_exit};
char *string_builtin[] = {"cd", "^D", "help", "exit"};

/**
 * lsh_builtinnums - size of the commands in shell
 * Return: size if success
 */
int lsh_builtinnums(void)
{
	return (sizeof(string_builtin) / sizeof(char *));

/**
 * lsh_cd - build-in command for changing directory
 * @args: List of arguments. "cd" in args[0] and the directory in args[1].
 * Return: Always returns 1 if success
 */
int lsh_cd(char **args)
{
	if (args[1] == NULL)
		fprintf(stderr, "hsh: expected argument to \"cd\"\n");
	else
		if (chdir(args[1]) != 0)
			perror("hsh");
	return (1);
}

/**
 * lsh_ctrld - A builtin command to handle the call "^D"
 * @args: Argument list
 * Return: 0 if success, terminate execution
 */
int lsh_ctrld(char **args)
{
	(void)args;
	free(args);
	return (200);
}

/**
 * lsh_help - command to print help
 * @args: List of arguments
 * Return: 1 if success, continues executing.
 */
int lsh_help(char **args)
{
	int index;

	printf("Elijah Mwathi and  Jude Kimathi\n");
	printf("Call +254-725-help, for help\n");
	(void)args;

	for (index = 0; index < lsh_builtinnums(); index++)
		printf(" %s\n", string_builtin[index]);
	return (1);
}

/**
 * lsh_exit - builtin command for exiting shell
 * @args: Argument list, not examined.
 * Return: 0 if success, terminates execution
 */
int lsh_exit(char **args)
{
	(void)args;
	free(args);
	return (200);
}

/**
 * fork_s - foo to create a fork
 * @args: Values and command path.
 * @argv: pointer to the name of the program being run
 * @env: Local environment vector
 * @l: pointer to user command line
 * @pid: ID of process
 * @ch: Checker to add new test
 * Return: Always return 0 if success
 */
int fork_s(char **args, char *argv[], char **env, char *l, int pid, int ch)
{
	int st, index;
	pid_t child;
	char *f = "%s: %d: %s: not found\n";

	if (args[0] == NULL)
		return (1);
	for (index = 0; index < lsh_builtinnums(); index++)
		if (_strcmp(args[0], string_builtin[index]) == 0)
			return (builtin_f[index](args));
	child = fork();
	if (child == 0)
	{
		if (execve(args[0], args, env) == -1)
		{
			fprintf(stderr, f, argv[0], pid, args[0]);
			if (!ch)
				free(args[0]);
			free(args);
			free(l);
			exit(errno);
		}
	}
	else
		wait(&st);
		return (st);
	return (0);
}
