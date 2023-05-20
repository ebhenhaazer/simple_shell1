#include "shell.h"

/**
 * _septr - function to check for a separator
 * @ch: the character to check
 * @s: the string
 *
 * Return: 1 if success, 0 if not
 */

int _septr(char ch, char *s)
{
	/* Loop to check separator string */
	while (*s)
	{
		/* If character is same as separator */
		if (*s == ch)
			return (1);
		s++;
	}
	/* If no match was found, return false */
	return (0);
}
