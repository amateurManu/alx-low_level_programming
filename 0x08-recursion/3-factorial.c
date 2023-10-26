#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: input number
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
