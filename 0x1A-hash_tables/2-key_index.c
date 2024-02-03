#include "hash_tables.h"

/**
 * key_index - gives the index of key
 * @key: key
 * @size: size of array of hash table
 *
 * Return: index at which key/value pair is stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
