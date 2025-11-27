#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_dnodeint_end - add a node to the end of the list
 * @head: The head of the list
 * @n: the string to write into the list
 *
 * Return: the new list item or the head of the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_item;
	dlistint_t *current;

	new_item = malloc(sizeof(dlistint_t));
	if (new_item == NULL)
		return (NULL);

	new_item->n = n;
	new_item->next = NULL;

	current = *head;
	if (current == NULL)
	{
		new_item->prev = NULL;
		*head = new_item;
		return (*head);
	}
	/*
	 * Find the last node in the list
	 * and make its next pointer point to the new item
	 */
	while (1)
	{
		if (current->next == NULL)
			break;
		current = current->next;
	}
	current->next = new_item;
	new_item->prev = current;
	return (new_item);
}
