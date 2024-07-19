#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return - Always 0
 */
int main(void)
{
	int c;
	long int n1, n2, fib;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (c = 0; c < 48; c++)
	{
		fib = n1 + n2;
		printf(", %ld", fib);
		n1 = n2;
		n2 = fib;
	}
	printf("\n");
	return (0);
}
