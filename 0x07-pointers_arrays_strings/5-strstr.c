#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: first string
 * @needle: second string
 * Return: pointer to the beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *haystack1;
	char *needle1;

	while (*haystack != '\0')
	{
		haystack1 = haystack;
		needle1 = needle;

		while (*haystack != '\0' && *needle1 != '\0' && *haystack == *needle1)
		{
			haystack++;
			needle1++;
		}
		if (!*needle1)
			return (haystack1);
		haystack = haystack1 + 1;
	}
	return (0);
}
