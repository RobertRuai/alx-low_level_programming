#include "main.h"

/**
 * _strstr - entry point
 *
 * description - a function that locates a substring.
 *
 * @haystack: The character to print
 * @needle: The character to print
 *
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *i = haystack;
		char *j = needle;

		while (*haystack && *j && *haystack == *j)
		{
			haystack++;
			j++;
		}

		if (!*j)
			return (i);

		haystack = i + 1;
	}
	return ('\0');
}
