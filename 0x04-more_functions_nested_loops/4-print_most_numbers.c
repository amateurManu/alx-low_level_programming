#include "main.h"

/**
 * print_most_numbers - prints single digit numbers except 2 and 4
 * Return: Nothing
 */

void print_most_numbers(void)
{
	int a = '0';

	for (; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
			_putchar(a);
	}
	_putchar('\n');
}
