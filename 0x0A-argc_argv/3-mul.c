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
		printf("Error\n");
	else
		printf("%d\n", argv[1] * argv[2]);

	return (0);
}
