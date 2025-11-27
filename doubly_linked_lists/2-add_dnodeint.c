#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_dnodeint - add a node to the start of the list
 * @head: the head of the list
 * @n: the int to add
 *
 * Return: the item added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_item;
	dlistint_t *current;

	new_item = malloc(sizeof(dlistint_t));
	if (new_item == NULL)
		return (NULL);

	current = *head;
	new_item->n = n;
	new_item->prev = NULL;
	new_item->next = current;
	if (current != NULL)
		current->prev = new_item;

	*head = new_item;
	return (*head);
}
