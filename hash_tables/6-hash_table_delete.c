#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - delete the hash table
 * @ht: the hash table to use
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	hash_node_t *next_node;
	unsigned long int size = ht->size;

	if (ht == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		current = ht->array[i];
		if (current == NULL)
			continue;

		while (current != NULL)
		{
			next_node = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next_node;
		}
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
