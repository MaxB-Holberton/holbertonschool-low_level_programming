#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * insert_dnodeint_at_index - get the specified node
 * @h: the head of the node
 * @idx: position of the node
 * @n: position to insert node
 *
 * Return: the node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *previous;
	dlistint_t *new_item;
	unsigned int i = 0;

	new_item = malloc(sizeof(dlistint_t));
	if (new_item == NULL)
	{
		return (NULL);
	}
	current = *h;
	new_item->n = n;
	if (idx == 0 || current == NULL)
	{
		new_item->prev = NULL;
		new_item->next = current;
		if (current != NULL)
			current->prev = new_item;
		*h = new_item;
		return (*h);
	}

	for (i = 0; i < idx; i++)
	{
		if (current == NULL)
			return (NULL);
		previous = current;
		current = current->next;
	}
	previous->next = new_item;
	current->prev = new_item;
	new_item->next = current;
	new_item->prev = previous;

	return (new_item);
}
