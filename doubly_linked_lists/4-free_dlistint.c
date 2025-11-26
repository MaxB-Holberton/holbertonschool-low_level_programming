#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/*
 * free_dlistint - Free the list 
 * @head: The head of the list
 *
 * Return: nothing  
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next_item;

	current = head;
	while (current != NULL)
	{
		next_item = current->next;
		free(current);
		current = next_item;
	}
}
