#include "shell.h"

/**
 * strcat_ - Concatenates two strings
 * @destination: Charater to concatenate from
 * @source: Character to be concatenated
 *
 * Return: Destination
 */

char *strcat_(char *destination, char *source)
{
	char *ptr = destination;

	while (*ptr != '\0')
		ptr++;

	while (*source != '\0')
	{
		*ptr = *source;
		ptr++;
		source++;
	}

	*ptr = '\0';

	return (destination);
}
