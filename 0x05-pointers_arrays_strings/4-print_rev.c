#include "main.h"

/**
 * print_rev - function that prints the reverse of a string
 * @s: input string
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = 0;

	int i;

	char *start, *end, temp;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	start = s;

	end = s;

	for (i = 0; i < len - 1; i++)
		end++;

	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
	_putchar('\n');
}
