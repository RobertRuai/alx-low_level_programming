#include "main.h"

/**
 * _strchr - entry point
 *
 * description - a function that locates a character in a string.
 *
 * @s: The character to print
 * @c: The character to print
 *
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int j;

	while (s[i])
		i++;
	for (j = 0; j < i; j++)
	{
		if (c == s[j])
		{
			s += j;
			return (s);
		}
	}

	return ('\0');
}
