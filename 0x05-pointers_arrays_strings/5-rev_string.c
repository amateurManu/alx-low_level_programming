#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: an input string
 * Return: nothing
 */

void rev_string(char *s)
{
	int len = 0, i;

	while (*s == '\0')
	{
		len++;
		s++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
