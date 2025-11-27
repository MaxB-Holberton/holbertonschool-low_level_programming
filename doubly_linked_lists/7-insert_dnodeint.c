#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * create_node - creates the node
 * @n: the int to add
 * @prev: pointer to the previous node
 * @next: pointer to the next node
 *
 * Return: the created node
 */
dlistint_t *create_node(int n, void *prev, void *next)
{
	dlistint_t *new_item;

	new_item = malloc(sizeof(dlistint_t));
	if (new_item == NULL)
		return (NULL);

	new_item->n = n;
	new_item->prev = prev;
	new_item->next = next;

	return (new_item);
}

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

	if (h == NULL)
		return (NULL);

	current = *h;
	if (idx == 0 || current == NULL)
	{
		new_item = create_node(n, NULL, current);

		if (current != NULL)
			current->prev = new_item;
		*h = new_item;
		return (new_item);
	}

	for (i = 0; i < idx; i++)
	{
		if (current == NULL)
			return (NULL);
		previous = current;
		current = current->next;
	}
	new_item = create_node(n, previous, current);
	previous->next = new_item;
	current->prev = new_item;

	return (new_item);
}
