#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_list - Free the list
 * @head: The head of the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next_item;

	current = head;
	while (current != NULL)
	{
		next_item = current->next;
		free(current->str);
		free(current);
		current = next_item;
	}
}
