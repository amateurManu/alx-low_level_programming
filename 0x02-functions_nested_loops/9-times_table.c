#include <stdio.h>
#include "main.h"

/**
 * times_table - Check description
 * Description: The function prints the 9 times table
 * Return: Nothing
 */

void times_table(void)
{
	int a, b, i;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			i = a * b;

			if ((i / 10) == 0)
			{
				if (b != 0)
				_putchar(' ');
				_putchar(i + '0');

				if (b == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		if (b == 9)
		continue;
	_putchar(',');
_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
