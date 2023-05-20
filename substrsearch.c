#include "shell.h"

/**
 * search_substr - search whether string has substring
 * @s: string searched
 * @subs: substring to find
 *
 * Return: NULL if false, pointer to next character if true
 */

char *search_substr(const char *s, const char *subs)
{
	/* iterate through subs */
	while (*subs)
	{
		if (*subs++ != *s++)
			return (NULL);
	}
	/* if all characters in the subs match with the s */
	return ((char *)s);
}
