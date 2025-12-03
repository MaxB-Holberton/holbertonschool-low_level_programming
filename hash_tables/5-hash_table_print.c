#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - get the value from a key
 * @ht: the hash table to use
 *
 * Return: the value or NULL on fail
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	unsigned long int size = ht->size;

	int toggle_comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < size; i++)
	{
		current = ht->array[i];
		if (current == NULL)
			continue;

		while (current != NULL)
		{
			if (toggle_comma != 0)
				printf(", ");

			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			toggle_comma = 1;
		}
	}
	printf("}\n");
}
