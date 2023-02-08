#include "main.h"

/**
 * append_text_to_file - entry point
 *
 * description - appends text at the end of a file
 *
 * @filename: The character to print
 * @text_content: The character to print
 *
 * Return: Always 0 (Success)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, status, txt = 0;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

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
