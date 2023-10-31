#include "main.h"

/**
 * _strdup - copies string to newly allocated memory
 * @str: pointer to string to be copied
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;

	dup = (char *)malloc((a + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
	{
		dup[b] = str[b];
	}

	return (dup);
}
