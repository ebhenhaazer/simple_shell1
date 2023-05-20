#include "shell.h"

/**
 * isintiv - checks if the shell is in interactive mode
 * @info: pointer to the info_t struct
 *
 * Return: 1 if in interactive mode, 0 otherwise
 */

int isintiv(args_t *args)
{
	/* Check whether STDIN and readfd */
	return (isatty(STDIN_FILENO) && args->rdfd <= 2);
}
