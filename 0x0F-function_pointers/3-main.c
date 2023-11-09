#include <stdio.h>
#include <stdlib.h>
#include "function_pointers"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments passed to running program
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	operator = get_op_function(argv[2]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operator(atoi(argv[1]), atoi(argv[3])));
	return (0);
}	
