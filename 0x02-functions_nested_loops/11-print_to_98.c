#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Check description
 * @a: An input integer
 * Description: Function prints numbers from the input number to 98
 * Return: Nothing
 */

void print_to_98(int a)
{
	if (a <= 98)
	{
		for (; a <= 98; a++)
		{
			printf("%d", a);

			if (a == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; a >= 98; a--)
		{
			printf("%d", a);

			if (a == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
