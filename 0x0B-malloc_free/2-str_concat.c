#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: second string appended to the first string
 */

char *str_concat(char *s1, char *s2)
{
	char *new;
	unsigned int a, b, c, count;

	if (s1 == NULL)
		s1 = "";

	if (s1 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	new = malloc((a + b + 1) * sizeof(char));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	for (c = 0; c < a; c++)
		new[c] = s1[c];

	count = b;

	for (b = 0; b <= count; c++, b++)
		new[c] = s2[b];

	return (new);
}
