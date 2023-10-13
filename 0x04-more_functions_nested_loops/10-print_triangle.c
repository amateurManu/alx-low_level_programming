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
			for (space = size - 1; space >= 0; space--)
				_putchar(' ');
			for (t = 1; t <= size; t++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
