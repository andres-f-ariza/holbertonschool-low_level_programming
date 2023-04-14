#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: Hash table to look into
 * @key: Key looking for
 * Return: Value associated to key, or NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *actual_node;

	if (ht && key)
	{
		idx = key_index((const unsigned char *)key, ht->size);
		actual_node = (ht->array)[idx];
		while (actual_node)
		{
			if (strcmp(key, actual_node->key) == 0)
				return (actual_node->value);
			actual_node = actual_node->next;
		}
	}
	return (NULL);
}
