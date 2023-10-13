#include "main.h"

/**
 * print_line - prints a line of size n
 * @n: input that determines length of line
 * Return: Nothing
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
