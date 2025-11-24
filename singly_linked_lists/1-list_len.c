#include <stdio.h>
#include "lists.h"

/**
 * list_len - print the length of the list
 * @h: the list to print
 *
 * Return: the length of the list
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int i = 0;

	if (current == NULL)
		return (-1);

	while(1)
	{
		i++;
		if (current->next == NULL)
			break;
		current = current->next;
	}
	return (i);
}
