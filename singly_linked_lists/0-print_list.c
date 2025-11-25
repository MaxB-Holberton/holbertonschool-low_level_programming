#include <stdio.h>
#include "lists.h"
/**
 * print_current - print the current list item
 * @len: length of the string to print
 * @str: the string to print
 *
 * Return: 1 - as one item has been traversed.
 */
int print_current(unsigned int len, char *str)
{
	if (str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n", len, str);
	}
	return (1);
}
/**
 * print_list - print the list
 * @h: the list to print
 *
 * Return: the number of items printed
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	int i = 0;

	if (current == NULL)
		return (0);

	while (1)
	{
		i += print_current(current->len, current->str);
		if (current->next == NULL)
			break;
		current = current->next;
	}
	return (i);
}
