#include "main.h"

/**
 * print_line - Function that prints a straight line on the terminal
 * @n: How many times _ should be printed
 * Return: Nothing
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
