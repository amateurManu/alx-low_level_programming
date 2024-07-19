#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int a, boolean, boolean2;
	long int n1, n2, fibn, fibn2, n11, n22;

	n1 = 1;
	n2 = 2;
	boolean = boolean2 = 1;
	printf("%ld, %ld", n1, n2);
	for (a = 0; a < 96; a++)
	{
		if (boolean)
		{
			fibn = n1 + n2;
			printf(", %ld", fibn);
			n1 = n2;
			n2 = fibn;
		}
		else
		{
			if (boolean2)
			{
				n11 = n1 % 1000000000;
				n22 = n2 % 1000000000;
				n1 = n1 / 1000000000;
				n2 = n2 / 1000000000;
				boolean2 = 0;
			}
			fibn2 = (n11 + n22);
			fibn = n1 + n2 + (fibn2 / 1000000000);
			printf(", %ld", fibn);
			printf("%ld", fibn2 % 1000000000);
			n1 = n2;
			n11 = n22;
			n2 = fibn;
			n22 = (fibn2 % 1000000000);
		}
		if (((n1 + n2) < 0) && boolean == 1)
			boolean = 0;
	}
	printf("\n");
	return (0);
}
