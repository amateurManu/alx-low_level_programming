#include "main.h"

/**
 * print_triangle - prints a triangle in the terminal
 * @size: size of the triangle
 * Return: Nothing
 */

void print_triangle(int size)
{
	int n, t, space;

	if (size > 0)
	{
		for (n = 1; n <= size; n++)
		{
			for (space = 1; space <= size - n; space++)
			{
				_putchar(' ');
			}
			for (t = 1; t <= n; t++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
