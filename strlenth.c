#include "shell.h"

/**
 * _strlen - Main Entry point
 * Description: Find string length
 * @str: Integer
 * Return: int
 */

int _strln(char *str) /* p=&str[0] */
{
	int length;

	while (*str != '\0') {
		length++;
		str++;
	}
	return length;
}

