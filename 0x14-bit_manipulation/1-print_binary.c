#include "main.h"

/**
 * print_binary - entry point
 *
 * description -  prints the binary representation of a number
 *
 * @n: The character to print
 *
 * Return: Always 0 (Success)
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
