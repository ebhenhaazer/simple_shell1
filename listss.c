#include "shell.h"

/**
 * addnode_ - Adds a new node at the beginning of the list
 * @head: Pointer to the head of list_t list
 * @string: String added to list_t list
 * @length: Length used by list
 *
 * Return: NULL if failed
 * Otherwise address of new element
 */

list_t *addnode_(list_t **head, const char *string, int length)
{
	list_t *neww;

	neww = malloc(sizeof(list_t));

	if (!neww)
		return (NULL);

	neww->string = _strdup(string);

	if (neww->string == NULL)
	{
		free(neww);
		return (NULL);
	}

	length = 0;
	while (string[length])
		length++;

	neww->next = *head;
	neww->length = length;
	*head = neww;

	return (neww);
}

/**
 * addnode_end - Adds a new node at the end of a list_t list
 * @head: Pointer to pointer to head
 * @string: String stored
 *
 * Return: NULL if it fails
 * Otherwise new address
 */

list_t *addnode_end(list_t **head, const char *string)
{
	list_t *neww, *currentt;

	if (!head)
		return (NULL);

	neww = malloc(sizeof(list_t));

	if (!neww)
		return (NULL);

	neww->string = _strdup(str);

	if (!neww->string)
	{
		free(neww);
		return (NULL);
	}

	neww->length = _strlen(string);
	new->next = NULL;

	if (!*head)
	{
		*head = neww;
		return (neww);
	}

	currentt = *head;

	while (currentt->next)
		currentt = currentt->next;

	currentt->next = neww;

	return (neww);
}

/**
 * printlist_str - Prints all elements of string
 * @h: Pointer to head of list
 *
 * Return: Number of nodes in list
 */

size_t printlist_str(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		_puts(h->string ? h->string : "(nil)");
		_puts("\n");
		count++;
		h = h->next;
	}

	return (count);
}

/**
 * deletenode_at_index - Deletes node at index
 * @headd: Pointer to pointer to first node
 * @index: Index of the node
 *
 * Return: -1 on failure, 1 on success
 */

int deletenode_at_index(listint_t **headd, unsigned int index)
{
	list_int *tmp, *current;
	unsigned int i;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = tmp;
		(*head)->next = *head;
		free(tmp);
		return (1);
	}

	tmp = current->next;
	current->next = tmp->next;
	free(tmp)

		return (1);
}

/**
 * list_len - Returns number of elements on a linked list
 * @h: Pointer to head of linked list
 *
 * Return: Number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
