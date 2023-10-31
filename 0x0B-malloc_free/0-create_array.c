#include "main.h"

/**
 * create_array - function creates an array, initializes a specific char
 * @size: size of memory to allocate
 * @c: character to be initialized to the array
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int a;

	if (size == 0)
		return (NULL);

	t = malloc(size * sizeof(c));

	if (t == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		t[a] = c;

	return (t);
}
