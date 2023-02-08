#include "main.h"

/**
 * create_file - entry point
 *
 * description - creates a file
 *
 * @filename: The character to print
 * @text_content: The character to print
 *
 * Return: Always 0 (Success)
 */
int create_file(const char *filename, char *text_content)
{
	int f, status, txt = 0;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[txt] != '\0')
			txt++;

		status = write(f, text_content, txt);
		if (status == -1)
			return (-1);
	}

	close(f);
	return (1);
}
