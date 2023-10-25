#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string to be checked
 * @accept: substring that should match initial segment of s
 * Return: number of bytes in s matching in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, i;

	for (a = 0; s[a] != '\0'; a++)
	{
		i = 1;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				i = 0;
				break;
			}
		}
		if (i == 1)
			break;
	}
	return (a);
}
