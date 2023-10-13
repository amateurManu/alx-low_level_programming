#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Check description
 * @n: An input integer
 * Description: The function prints the last digit of the input number
 * Return: The last digit of input number
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
		i = -1 * (n % 10);
	else
		i = n % 10;

	_putchar((i % 10) + '0');
	return (i % 10);
}
