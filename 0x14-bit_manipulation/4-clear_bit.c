#include "main.h"

/**
 * clear_bit - entry point
 *
 * description -  returns the value of 0 bit at a given index
 *
 * @n: The character to print
 * @index: The character to print
 *
 * Return: Always 0 (Success)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int v;

	if (index > 63)
		return (-1);

	v = 1 << index;
	*n = *n & ~v;

	return (1);
}
