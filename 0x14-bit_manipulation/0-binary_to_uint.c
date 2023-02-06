#include "main.h"

/**
 * binary_to_uint - entry point
 *
 * description -  converts a binary number to an unsigned int
 *
 * @b: The character to print
 *
 * Return: Always 0 (Success)
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int v = 0;

	if (b == NULL)
		return (0);

	if (b[i] < '0' || b[i] > '1')
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		v = v << 1;
		v = v + b[i] - '0';
		i++;
	}
	return (v);
}
