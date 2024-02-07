#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with a key
 * @ht: pointer to hash table
 * @key: key of the hash
 * Return: value of hash
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int k_pos;
	hash_node_t *temp;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	k_pos = key_index((unsigned char *)key, ht->size);

	temp = ht->array[k_pos];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
