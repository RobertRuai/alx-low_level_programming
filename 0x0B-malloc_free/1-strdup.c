#include "main.h"

/**
 * _strdup - entry point
 *
 * description -  a function that returns a pointer to
 *		a newly allocated space in memory
 *
 *
 * @str: The character to print
 *
 *
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *s;
	int i, l = 0;

	if (str == NULL)
		return (NULL);
	while (str[l] != '\0')
		l++;
	s = malloc((l + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
