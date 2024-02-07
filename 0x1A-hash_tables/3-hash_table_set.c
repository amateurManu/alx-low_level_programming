#include "hash_tables.h"

/**
 * add_n_hash - adds node at beginning of a hash at a given index
 * @head: head of hashed linked list
 * @key: key of the hash
 * @value: value to store
 * Return: head of the hash
 */
hash_node_t *add_n_hash(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *temp;

	temp = *head;

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (*head);
		}
		temp = temp->next;
	}

	temp = malloc(sizeof(hash_node_t));

	if (temp == NULL)
		return (NULL);

	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = *head;
	*head = temp;

	return (*head);
}

/**
 * hash_table_set - adds a hash (key, alue) to a hash table
 * @ht: pointer to the hash table
 * @key: key of the hash
 * @value: value to store
 * Return: 1 if successful, 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k_pos;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	k_pos = key_index((unsigned char *)key, ht->size);

	if (add_n_hash(&(ht->array[k_pos]), key, value) == NULL)
		return (0);

	return (1);
}
