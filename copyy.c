#include "shell.h"

/**
 * strcpy_ - Copies a string pointed by source
 * @destination: Character to be copied to
 * @source: Character to be copied from
 *
 * Return: Character copied to
 */

char *strcpy_(char *destination, char *source)
{
	char *ptr = destination;

	while (*source != '\0')
	{
		*ptr++ = *source++;
	}

	*ptr = '\0';

	return (destination);
}
