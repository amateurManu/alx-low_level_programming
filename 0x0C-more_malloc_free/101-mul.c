#include "main.h"
#include <ctype.h>

/**
 * main - Entry point
 * @argc: program argument count
 * @argv: arguments passed to program
 * Return: multiple of two positive numbers
 */

int main(int argc, char *argv[])
{
	unsigned int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (!isdigit(num1 || num2))
	{
		printf("Error\n");
		exit(98);
	}
	else
		printf("%d\n", num1 * num2);

	return (0);
}
