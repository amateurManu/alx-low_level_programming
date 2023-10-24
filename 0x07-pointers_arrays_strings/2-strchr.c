#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be checked
 * @c: input character
 * Return: pointer to occurrence of c in s or NULL if character not found
 */

char *_strchr(char *s, char c)
{
	unsigned int a;

	for (a = 0; s[a] != '\0'; a++)
		if (s[a] == c)
			return (s[a]);
	if (s[a] == c)
		return (s[a]);
	return ('\0');
}
