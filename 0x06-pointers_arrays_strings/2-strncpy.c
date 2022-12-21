#include "main.h"

/**
 * _strncpy - A function that copies a string.
 *
 * @dest: character to print
 * @src: character to print
 * @n: character to print
 *
 * Return: 0 Success
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
