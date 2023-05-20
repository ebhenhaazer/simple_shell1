#include "shell.h"

/**
 * get_length - Returns how many elements are in the linked list
 * @head: pointer to head node in linked list
 * Return: number of nodes in linked list
 */
size_t get_length(const node_current *hd)
{
	size_t mx = 0;

	/* Loop through list to the end */
	for (const node_current *c = hd; c != NULL; c = c->nxt)
	{
		/* increment matrix for each node */
		mx++;
	}
	/* return last matrix */
	return (mx);
}

/**
 * list2str - Returns string array of list.str
 * @hd: head node pointer
 * Return: Array of strings
 */
char **list2str(list_t *hd)
{
	list_t *node_c = hd;
	size_t node_nums = len_list(hd), x, y;
	char **str_arr;
	char *str;

	if (!hd || !node_nums)
	{
		return (NULL);
	}
	
	/* allocates memory to arrays of stings */
	str_arr = malloc(sizeof(char *) * (node_nums + 1));
	
	if (!str_arr)
	{
		return (NULL);
	}

	/* loop through each node */
	for (x = 0; node_c; node_c = node_c->nxt; x++)
	{
		str = malloc(_strln(node_c->s) + 1);
		if (!str)
		{
			/* if memory allocation fails. Return NULL */
			for (y = 0; y < x; y++)
			{
				free(str_arr[y]);
				free(str_arr);
				return (NULL);
			}
			str = _strcpy(str, node_c->s);
			str_arr[x] = str;
		}
		/* set last element to NULL */
		str_arr[x] = NULL;
		return (str_arr);
	}
}

/**
 * linked_ls_print - prints elements in linkedls
 * @hd: head node pointer
 * Return: linked list size
 */
size_t linked_ls_print(const node_t *hd)
{
	size_t size_list = 0;
	/* loop through every node and print string value and number */

	for (const node_t *c = hd; c; c = c->nxt)
	{
		_puts(convert_number(current->num, 10, 0));
		_putchar(':');
		_putchar(' ');
		_puts(c->str ? c->str : "(nil)");
		_puts("\n");
		size_list++;
	}
	return (size_list);
}

/**
 * using_prefix - Returns node str that begins with prefix
 * @hd: head node pointer
 * @prefx: to match string
 * @c_next: Next character after prefix
 *
 * Return: NULL or matched node
 */
list_t *using_prefix(list_t *hd, char *prefx, char c_next)
{
	char *match = NULL;
	/* Loop through each node to check whether prefix is present in the string */

	for (list_t *c = hd; c; c = c->nxt)
	{
		match = begins_with(c->str, prefx);
		
		if (match && ((c_next == -1) || (*match == c_next)))
			return (c);
	}
	return (NULL);
}

/**
 * node_inx - Return the node index
 * @hd: Head node pointer
 * @node: node pointer
 * Return: node index if success, or -1
 */
ssize_t node_inx(list_t *hd, list_t *node)
{
	size_t i = 0;
	/* loop through nodes to check whether it matches */

	for (list_t *c = hd; c; c = c->next)
	{
		if (c == node)
			return (i);
		i++;
	}
	return (-1);
}
