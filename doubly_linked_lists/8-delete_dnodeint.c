#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * delete_dnodeint_at_index - get the specified node
 * @h: The head of the list
 * @idx : the position of the node to delete
 *
 * Return: the node
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int idx)
{
	dlistint_t *current;
	dlistint_t *previous;
	unsigned int i = 0;

	if (h == NULL)
		return (-1);

	current = *h;
	if (current == NULL)
	{
		return (-1);
	}
	if (idx == 0)
	{
		previous = current;
		current = current->next;
		if (current == NULL)
		{
			free(previous);
			*h = NULL;
			return (1);
		}
		current->prev = NULL;
		*h = current;
		free(previous);
		return (1);
	}
	for (i = 0; i < idx; i++)
	{
		if (current == NULL)
			return (-1);
		previous = current;
		current = current->next;
	}
	previous->next = current->next;
	current->prev = previous;
	free(current);
	return (1);
}
