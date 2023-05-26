#include "shell.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: String to be compared
 *
 * Return: Multiple
 */

int _strcmp(char *s1, char *s2)
{
	int index = 0;
	int value;

	while (s1[index] != 0 && s2[index] != 0)
		index++;

	value = s1[index] - s2[index];

	return (value);
}

/**
 * _strcpy - Copies a string
 * @source: Source of copy
 * @destination: Destination to copy to
 *
 * Return: Destination
 */

char *_strcpy(char *source, char *destination)
{
	int index = 0;

	for (index = 0; source[index] != '\0'; index++)
		destination[index] = source[index];

	destination[index + 1] = 0;

	return (destination);
}

/**
 * _strcat - Catenates two string
 * @source: Origin
 * @destination: Destination
 *
 * Return: Always 0
 */

char *_strcat(char *source, char *destination)
{
	int index, j = 0;

	for (index = 0; destination[index] != '\0';)
	{
		index++;
	}

	for (j = 0; source[j] != '\0'; j++)
	{
		destination[index] = source[index];
		index++;
	}

	destination[index] = '\0';
	return (destination);
}

/**
 * _strlen - Size of string
 * @s: string to measure
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0';)
		index++;

	return (index);
}

/**
 * _strncmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 * @num: Number of characters
 *
 * Return: The difference
 */

size_t _strncmp(char *s1, char *s2, size_t num)
{
	size_t a, b;

	for (b = 0; s1[b] != '\0' && b < num; b++)
	{
		a = s1[b] - s2[b];

		if (a != 0)
			return (a);
	}

	return (0);
}
