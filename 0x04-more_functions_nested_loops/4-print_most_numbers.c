#include "main.h"

/**
 * print_most_numbers - prints single digit numbers except 2 and 4
 * Return: Nothing
 */

void print_most_numbers(void);
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' && i == '4')
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
