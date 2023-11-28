#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: content to be appended
 *
 * Return: 1 (Success), -1 (Failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, n, wr;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
			;

		wr = write(file_d, text_content, n);

		if (wr == -1)
			return (-1);
	}

	close(file_d);

	return (1);
}
