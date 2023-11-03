#include "main.h"

/**
 * _realloc - reallocates memory block
 * @ptr: pointer to previously allocated memory
 * @old_size: size allocated to ptr
 * @new_size: new size of new memory block
 * Return: no value
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
