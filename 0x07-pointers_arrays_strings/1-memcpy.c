#include "main.h"

/**
 * _memcpy - entry point
 *
 * description - a function that copies memory area
 *
 * @dest: The character to print
 * @src: The character to print
 * @n: The character to print
 *
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
