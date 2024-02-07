#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 * Return: no value
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a;
	hash_node_t *temp;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	for (a = 0; a < ht->size; a++)
	{
		temp = ht->array[a];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", sep, temp->key, temp->value);
			sep = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
