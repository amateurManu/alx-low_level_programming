#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: conent of file
 * Return: 1 (Success)
 */

int create_file(const char *filename, char *text_content)
{
	int file_d, n, wr;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_d == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (n = 0; text_content[n]; n++)
		;

	wr = write(file_d, text_content, n);

	if (wr == -1)
		return (-1);

	close(file_d);

	return (1);
}
