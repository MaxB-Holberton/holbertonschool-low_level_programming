#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * len_of_str - get the length of a string
 * @s: the string to check
 *
 * Return: the length
 */
int len_of_str(const char *s)
{
	int n = 0;

	for (n = 0; s[n] != '\0'; n++)

	return (n);
}
/**
 * add_node - add a node to the start of the list
 * @head: the head of the list
 * @str: the string to add
 *
 * Return: the item added
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_item;

	new_item = malloc(sizeof(list_t));
	if (new_item == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new_item->str = strdup(str);
	new_item->len = len_of_str(str);
	new_item->next = *head;
	*head = new_item;

	return (new_item);
}
