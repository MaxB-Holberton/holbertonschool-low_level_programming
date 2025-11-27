#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * sum_dlistint - add the ints in the list
 * @head: The head of the list
 *
 * Return: the integer
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
