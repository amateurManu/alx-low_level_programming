#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an array of integers
 * @a: array
 * @n: number of elements of array
 * Return: no value
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d\n, ", a[i])
	}
}
