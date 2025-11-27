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
	dlistint_t *new_item;
	unsigned int i = 0;

	new_item = malloc(sizeof(dlistint_t));
	if (new_item == NULL)
	{
		return (NULL);
	}

	current = *h;
	for (i = 0; i < idx; i++)
	{
		if (current == NULL)
			return (NULL);
		if ((i == idx - 1))
		{
			new_item->prev = current;
			new_item->next = current->next;
			current->next = new_item;
			current = new_item->next;
			break;
		}
		current = current->next;
	}
	new_item->n = n;
	current->prev = new_item;


	return (*h);
}
