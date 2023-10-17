#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: an input string
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;

	while (*s < '\0')
	{
		_putchar(s[i]);
		i--;
	}
}
