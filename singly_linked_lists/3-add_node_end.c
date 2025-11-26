#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - get the length of a string
 * @s: the string to check
 *
 * Return: n - the length of string
 */
int _strlen(const char *s)
{
	int n = 0;

	for (n = 0; s[n] != '\0'; n++)
	{}
	return (n);
}
/**
 * add_node_end - add a node to the end of the list
 * @head: The head of the list
 * @str: the string to write into the list
 *
 * Return: the new list item or the head of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_item;
	list_t *current;

	new_item = malloc(sizeof(list_t));
	if (new_item == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new_item->str = strdup(str);
	new_item->len = _strlen(str);
	new_item->next = NULL;

	/*
	 * if head is null (empty list)
	 * make the head the new item.
	 */
	if (*head == NULL)
	{
		*head = new_item;
		return (new_item);
	}
	/*
	 * Find the last node in the list
	 * and make its next pointer point to the new item
	 */
	current = *head;
	while (1)
	{
		if (current->next == NULL)
			break;
		current = current->next;
	}
	current->next = new_item;

	return (*head);
}
