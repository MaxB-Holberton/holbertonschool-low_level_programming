#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_dnodeint_at_index - get the specified node
 * @head: The head of the list
 * @index: the position of the node
 *
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	current = head;
	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}
	return (current);
}
