#include "main.h"

/**
 * err_file - checks if files can be opened
 * @file_from: being copied from
 * @file_to: being copied to
 * @argv: arguments
 * Return: no value
 */

void err_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments to program
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	ssize_t n, wr;
	char buff[1024];
	int file_from, file_to, err;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err_file(file_from, file_to, argv);

	n = 1024;

	while (n == 1024)
	{
		n = read(file_from, buff, 1024);
		if (n == -1)
			err_file(-1, 0, argv);
		wr = write(file_to, buff, n);
		if (wr == -1)
			err_file(0, -1, argv);
	}

	err = close(file_from);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err = close(file_to);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
