#include "main.h"

/**
 * read_textfile - entry point
 *
 * description - reads a text file and prints it to the POSIX standard output
 *
 * @filename: The character to print
 * @letters: The character to print
 *
 * Return: Always 0 (Success)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t readc, wcount;
	char *buff;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}

	readc = read(f, buff, letters);
	if (readc == -1)
		return (0);

	wcount = write(STDOUT_FILENO, buff, readc);
	if (readc != wcount)
		return (0);

	free(buff);

	close(f);

	return (wcount);
}
