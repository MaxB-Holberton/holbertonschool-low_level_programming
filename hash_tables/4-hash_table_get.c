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

	int key_compare;

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);

	if (ht->array[index]->next == NULL)
		return (ht->array[index]->value);

	current = ht->array[index]->next;
	while (current != NULL)
	{
		key_compare = strcmp(key, current->key);
		if (key_compare == 0)
			return (current->value);

		current = current->next;
	}
	return (NULL);
}
