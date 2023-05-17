#include "shell.h"

/**
 * atoi_ - Converts a string into an integer
 * @i: Integer
 *
 * Return: Character
 */

int atoi_(char *i)
{
	int sign = 1;
	unsigned int answer = 0;

	while (*i != '\0' && (*i < '0' || *i > 9))
	{
		if (*i == '-')
			sign *= -1;
		s++;
	}

	while (*i >= '0' && *i <= '9')
	{
		answer = answer * 10 + (*i - '0');
		i++;
	}

	return (sign * answer);
}
