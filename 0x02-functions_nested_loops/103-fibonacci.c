#include <stdio.h>

/**
 * main - prints the even numbers of the fibonacci
 * sequence not exceeding 4000000
 *
 * Return: Always 0
 */
int main(void)
{
	long int n1, n2, fibn, afibn;

	n1 = 1;
	n2 = 2;
	fibn = afibn = 0;
	while (fibn <= 4000000)
	{
		fibn = n1 + n2;
		n1 = n2;
		n2 = fibn;
		if ((n1 % 2) == 0)
		{
			afibn += n1;
		}
	}
	printf("%ld\n", afibn);
	return (0);
}
