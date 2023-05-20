#include "shell.h"

/**
 * _comparestr - Main Entry Point
 * Description: Make a comparison between two strings
 * @str1: Characters pointer in string
 * @str2: Characters pointer in string
 * Return: character
 */

int _strcmp(char *str1, char *str2)
{
	int index = 0;

	while (str1[index] == str2[index])
	{
		if (*str1 || *str2 == '\0')
		{
			return (0);
		}
		str1++;
		str2++;
	}
	return (s1[i] - s2[i]);
}
