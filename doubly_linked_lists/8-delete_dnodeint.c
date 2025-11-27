#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * handle_pos0 - if the function is at idx 0
 * @h: pointer of pointer to head of the list
 *
 * Return: 1 for sucess or -1 for fail
 */
int handle_pos0(dlistint_t **h)
{
	dlistint_t *delete;
	dlistint_t *current = *h;

	delete = current;
	if (current->next == NULL)
	{
		*h = NULL;
	}
	else
	{
		current = current->next;
		current->prev = NULL;
		*h = current;
	}
	free(delete);
	return (1);

}
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
	dlistint_t *delete;
	unsigned int i = 0;

	if (h == NULL || *h == NULL)
		return (-1);

	if (idx == 0)
		return (handle_pos0(h));

	current = *h;
	for (i = 0; i < idx; i++)
	{
		if (current == NULL)
			return (-1);
		previous = current;
		current = current->next;
	}
	delete = current;
	current = current->next;
	previous->next = current;
	current->prev = previous;
	free(delete);
	return (1);
}
