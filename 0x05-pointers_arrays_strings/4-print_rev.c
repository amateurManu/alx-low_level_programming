#include "main.h"

/**
 * print_rev - function that prints the reverse of a string
 * @s: input string
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = 0;

	while (len >= 0)
	{
		if (s[len] == '\0')
			break;
		len++;
	}

	for (len--; len >= 0; len--)
		_putchar(s[len]);
	_putchar('\n');
}
