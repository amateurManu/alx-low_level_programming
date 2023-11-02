#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements of array
 * @size: number of elements of array
 * Return: no value
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	for (a = 0; a < (size * nmemb); a++)
		arr[a] = 0;

	return (arr);
}
