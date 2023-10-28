#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to run program
 * @argv: array of arguments passed
 * Return: multiple of two arguments
 */

int main(int argc, char *argv[])
{
	int i = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
