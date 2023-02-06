#include "main.h"

/**
 * get_bit - entry point
 *
 * description -  returns the value of a bit at a given index
 *
 * @n: The character to print
 * @index: The character to print
 *
 * Return: Always 0 (Success)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int v;

	if (index > 63)
		return (-1);

	v = (n >> index) & 1;

	return (v);
}
