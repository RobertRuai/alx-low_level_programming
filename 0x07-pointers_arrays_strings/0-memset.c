#include "main.h"

/**
 * _memset - entry point
 *
 * description - a function that fills memory with a constant byte.
 *
 * @s: The character to print
 * @b: The character to print
 * @n: The character to print
 *
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
