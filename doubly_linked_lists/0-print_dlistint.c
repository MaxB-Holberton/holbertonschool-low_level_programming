#include <stdio.h>
#include "lists.h"
/**
 * print_current - print the current list item
 * @n: the int to print
 *
 * Return: 1 - as one item has been traversed.
 */
int print_current(int n)
{
	printf("%d\n", n);
	return (1);
}
/**
 * print_dlistint - print the list
 * @h: the list to print
 *
 * Return: the number of items printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int i = 0;

	if (current == NULL)
		return (0);

	while (1)
	{
		i += print_current(current->n);
		if (current->next == NULL)
			break;
		current = current->next;
	}
	return (i);
}
