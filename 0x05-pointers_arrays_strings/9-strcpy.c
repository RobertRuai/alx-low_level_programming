#include "main.h"

/*
**
 *_strcpy - copies a string from one pointer to another
 *	including the terminating null byte (\0)
 *
 * @src: character to print
 * @dest: character to print
 *
 * Return: (0) Success
*/

char *_strcpy(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
