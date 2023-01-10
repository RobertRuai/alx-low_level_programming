#include "main.h"

/**
 * create_array - entry point
 *
 * description - a function that creates an array of chars,
 *		and initializes it with a specific char.
 *
 * @c: The character to print
 * @size: The character to print
 *
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size + 1) * sizeof(char));
	if (size == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
