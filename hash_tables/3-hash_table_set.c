#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - create a new hashed node
 * @ht: the hash_table to use
 * @key: the key to use
 * @value: the value to store
 *
 * Return: 1 on success or 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hash_node;
	unsigned long int index;
	hash_node_t *current;

	if (key == NULL || ht == NULL || (strcmp(key, "") == 0))
		return (0);

	new_hash_node = malloc(sizeof(hash_node_t));
	if (new_hash_node == NULL)
		return (0);

	new_hash_node->key = strdup(key);
	new_hash_node->value = strdup(value);
	new_hash_node->next = NULL;

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_hash_node;
		return (1);
	}
	current = ht->array[index]->next;
	while (current != NULL)
	{
		current = current->next;
	}
	current->next = new_hash_node;
	return (1);
}
