#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: an input string
 * Return: nothing
 */

void rev_string(char *s)
{
	int len = 0, i;

	while (len >= 0)
	{
		if (s[len] == '\0')
			break;
		len++;
	}

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
