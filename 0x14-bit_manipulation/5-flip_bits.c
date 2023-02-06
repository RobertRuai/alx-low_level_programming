#include "main.h"

/**
 * flip_bits - entry point
 *
 * description - number of bits  needed to flip to get
 *		from one number to another
 *
 * @n: The character to print
 * @m: The character to print
 *
 * Return: Always 0 (Success)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int v;
	unsigned int count = 0;

	v = n ^ m;
	while (v)
	{
		v = v & (v - 1);
		count++;
	}

	return (count);
}
