#include "shell.h"

/**
 * isalpha_ - Checks for certain alphabetic character
 * @c: The character to be found
 *
 * Return: 1 if c is a letter
 * Otherwise 0
 */

int isalpha_(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
