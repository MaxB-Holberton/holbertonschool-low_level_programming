#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_get - get the value from a key
 * @ht: the hash table to use
 * @key: the key to use
 *
 * Return: the value or NULL on fail
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	if (current == NULL)
		return (NULL);

	if (strcmp(key, current->key) == 0)
		return (current->value);

	while (current != NULL)
	{
		if (strcmp(key, current->key) == 0)
			return (current->value);

		current = current->next;
	}
	return (NULL);
}
