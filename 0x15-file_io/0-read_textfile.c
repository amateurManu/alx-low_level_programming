#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX std output
 * @filename: name of file
 * @letters: number of letters to read and print
 * Return: actual number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr;
	char *buff;
	int file_d;

	if (filename == NULL)
		return (0);

	file_d = open(filename, 0);

	if (file_d == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
		return (0);

	rd = read(file_d, buff, letters);
	wr = write(1, buff, rd);

	close(file_d);

	free(buff);

	return (wr);
}
