#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, sum;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0) /*Loop checks for multiples of 3 & 5*/
			sum += i; /*Sum is incremented by the multiples*/
	}
	printf("%d\n", sum);
	return (0);
}
