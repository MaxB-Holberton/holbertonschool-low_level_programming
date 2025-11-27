#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - print the length of the list
 * @h: the list to print
 *
 * Return: the length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int i = 0;

	if (current == NULL)
		return (0);

	while (1)
	{
		i++;
		if (current->next == NULL)
			break;
		current = current->next;
	}
	return (i);
}
